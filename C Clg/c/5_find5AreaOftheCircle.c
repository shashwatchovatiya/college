#include<stdio.h>
// #include<math.h>
int main()
{
    // Declar the variables
    float redius ,area ;
    float pi = 3.14159;
    // Asking radius of the circle

    printf("Enter Your Redius of Cricle :- ",redius);
    scanf("%f",&redius);

    // Calculate the area of the circle
    area = pi*redius*redius ;

    // Print the area of the circle
    printf("Area of cricle with radius is  :- %f \n",area);
    return 0;
}