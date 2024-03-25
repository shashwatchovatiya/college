#include<stdio.h>
int main()
{
    int no1 ; 
    int no2 ;
    int sum;

    printf("Enter First number :\n",no1);
    scanf("%d",&no1);

    printf("Enter Second number :\n",no2);
    scanf("%d",&no2);

    sum = no1 * no2 ;
    
    printf("Your Multiplication is = %d",sum);

    return 0;
}