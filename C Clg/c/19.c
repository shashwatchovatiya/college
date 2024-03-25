#include<stdio.h>
int main()
{
    int number ,quotient ,remainder ;

    // Get the number from the user
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Calculate & Display the quotient
    quotient = number / 2;
    printf("Quotient: %d \n", quotient);

    // Calculate & Display the remainder
    remainder = number % 2;
    printf("Remainder: %d\n", remainder);

    return 0;
}
