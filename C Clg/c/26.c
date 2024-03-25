#include<stdio.h>
int main()
{
    int a, b, c, x, calculate;
    printf("Enter the A value in natural number =  \n");
    scanf("%d",&a);
    printf("Enter the B value in natural number =  \n");
    scanf("%d",&b);
    printf("Enter the C value in natural number =  \n");
    scanf("%d",&c);
    printf("Enter the X value in natural number =  \n");
    scanf("%d",&x);

    // calculate the code ax2 + bx + c
    calculate = (a * x * x ) + ( b* x ) + (c) ;
    printf("The value of calculate is = %d ",calculate);

    return 0;
}
