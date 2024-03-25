#include<stdio.h>
int main()
{
    int a, b, c, calulate;

    printf("Enter A value in natural number = ");
    scanf("%d",&a);
    printf("Enter B value in natural number = ");
    scanf("%d",&b);
    printf("Enter C value in natural number = ");
    scanf("%d",&c);

    // calulate (a+b+c)2 formula
    calulate = (a * a) + ( b * b ) +( c * c) + 2*( (a)*(b)+ (b)*(c) +(c)*(a) );
    printf("The value of calculate is = %d \n",calulate);
    return 0;
}
