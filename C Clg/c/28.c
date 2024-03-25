#include<stdio.h>
int main()
{
    int a, b, calulate;

    printf("Enter A valu in natural number = ");
    scanf("%d",&a);
    printf("Enter B valu in natural number = ");
    scanf("%d",&b);

    // calulate  (a - b)3

    calulate = (a * a * a) - 3*(a * a * b) + 3*(a * b * b) - (b * b * b);
    printf("The value of calculate is = %d ",calulate);


    return 0;
}
