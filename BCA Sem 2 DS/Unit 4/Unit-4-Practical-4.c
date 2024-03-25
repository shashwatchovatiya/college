#include <stdio.h>
#include <stdlib.h> // for clear function

// Linear / Sequential Search
// aa 1 thi check kare che jo hoy to te return kare che nakar return kartu nathi

void clearConsole()
{
    system("clear"); // For Unix/Linux systems
    // system("cls"); // For Windows systems
}

int main()
{
    int a[50], i, item, n;
    clearConsole(); // clear Consol Function
    printf("Enter the number of elements you want in array : ");
    scanf("%d", &n);

    printf("\n Enter Elemnt : \n");
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }

    printf("\n Enter Item to search :");
    scanf("%d", &item);

    for (i = 0; i < n; i++)
    {
        /* code */
        if (item == a[i])
        {
            /* code */
            printf("\n Element is present at this row %d ", i + 1);
            break;
        }
    }

    if (i == n)
    {
        printf("\nItem does not exist in the array");
    }

    return 0;
}
