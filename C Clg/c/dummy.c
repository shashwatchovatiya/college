// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number of elements you want in table: ");
//     scanf("%d",&n);

//     for(i=1;i<=10;i++){
//         printf("\n %d * %d = %d",n,i,(n*i) );
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], multiarr[3][3];
    int i, j;

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // printf("Enter the first matrix:\n");
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // printf(" Enter the second matrix:\n");
            scanf("%d", &arr2[i][j]);
        }
    }
    /* Multiplying two matrices */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            multiarr[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                multiarr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf(" \n Answer the multiplication of array:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", multiarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
