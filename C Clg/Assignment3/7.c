#include <stdio.h>

int main()
{
    int n = 5; // Number of rows

    // Print the top part of the arrow
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    // Print the bottom part of the arrow
    for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}