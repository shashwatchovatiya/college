#include <stdio.h>

int sum2(int,int);
int Aveg(int,int);

int main()
{
    int number1,number2,Sum ;
    float avg;

    printf("Enter First Integer Number : ");
    scanf("%d",&number1 );

    printf("Enter Second Integer Number : ");
    scanf("%d",&number2 );
    
    // Function Calling
    Sum = sum2(number1,number2);
    avg = Aveg(number1,number2);

    printf("Number1 : %d ,Number2 : %d \n",number1,number2);
    printf("Sum is: %d \nAverage is: %2f \n", Sum,avg)  ; 

    return 0;
}
int sum2(int X,int Y)
{
    int Sum;
    Sum = X + Y;
    return Sum;
}


int Aveg(int X , int Y){
    float avg;
    avg = (X+Y)/(float)2;
    return avg;
}

