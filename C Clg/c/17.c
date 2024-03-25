#include<stdio.h>
int main()
{
    float number;
    
    printf("Enter one number = \n");
    scanf("%f",&number);

    if (number /10 == 0)
    {
        printf("This number %f  divided by 10 " ,number);
    }
    else{

        printf("this number %f is not divided by 10",number);
    }
    
    return 0;
}
