#include<stdio.h>
int main()
{
    int no1 ,no2 ,swap ;
    printf("Enter The First integer number = \n");
    scanf("%d",&no1);
    printf("Enter The Second integer number = \n");
    scanf("%d",&no2);
    // Swapping Methode 
    swap = no1 ;
    no1 = no2 ;
    no2 = swap ;
    printf("After swapping, first number = %d and second number = %d \n",no1,no2);
    return 0;
}
