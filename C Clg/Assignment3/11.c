#include <stdio.h>

int main()
{
    int i, j, k, N = 5;


    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        k = i;
        // Logic to print numbers
        for (j = 1; j <= i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}