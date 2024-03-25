#include<stdio.h>
int main()
{
    int number ,square,cube ;
    printf("Enter a number you like that you want to square and cube = \n");
    scanf("%d",&number);
    // for square code 
    square = number * number ;
    printf("This is your square = %d \n",square);
    // for cube code 
    cube = number * number * number;
    printf("This is your cube = %d \n",cube);

    return 0;
}
