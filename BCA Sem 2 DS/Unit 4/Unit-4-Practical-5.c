#include <stdio.h>
#include <stdlib.h> // for clear function

// Binary Search.
//  aa ma mid shodi ne low and high karva na hoy

void clearConsole()
{
    system("clear"); // For Unix/Linux systems
    // system("cls"); // For Windows systems
}

int main()
{
    int i, low, high, mid, n, key, array[100];
    clearConsole(); // clear Consol Function
    printf("Enter number of elementsn ");
    scanf("%d", &n);
    printf("Enter %d integersn ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter value to findn ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] < key)
            low = mid + 1;
        else if (array[mid] == key)
        {
            printf("%d found at location %d ", key, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        printf("Not found! %d isn't present in the list in ", key);
    return 0;
}
