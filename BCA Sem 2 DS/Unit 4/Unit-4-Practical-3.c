#include <stdio.h>
#include <stdlib.h> // for clear function

// Insertion Sort
// આમાં જે પણ એરે હશે તે પોતાની જગ્યાએથી ઉઠાવીને તેની સાચી જગ્યાએ મુકશે

void clearConsole()
{
    system("clear"); // For Unix/Linux systems
    // system("cls"); // For Windows systems
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
     int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];     // Declaring array dynamically based on user input
    clearConsole(); // clear Consol Function
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n Original array: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf(" \n Sorted array: \n");
    printArray(arr, n);
    return 0;
}
