#include<stdio.h>
int main()
{
    int a, b, calulate;

    printf("Enter A valu in natural number = ");
    scanf("%d",&a);
    printf("Enter B valu in natural number = ");
    scanf("%d",&b);
    
    // calulate  (a + b)2
    calulate = (a*a) + 2*(a * b) + (b * b);
    printf("The value of calculate is = %d ",calulate);
    
    return 0;
}
