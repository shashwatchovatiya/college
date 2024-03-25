#include<stdio.h>
int main()
{
    float no1 ; 
    float no2 ;
    float sum;

    printf("Enter First number :\n",no1);
    scanf("%f",&no1);

    printf("Enter Second number :\n",no2);
    scanf("%f",&no2);

    sum = no1 / no2 ;
    
    printf("Your Divison is = %f",sum);

    return 0;
}