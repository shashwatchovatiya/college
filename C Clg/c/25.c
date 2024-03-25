#include<stdio.h>
int main()
{
    int no1,no2,no3,division;

    printf("Enter First integer number = \n");
    scanf("%d",&no1);
    printf("Enter Second integer number = \n");
    scanf("%d",&no2);
    printf("Enter Third integer number = \n");
    scanf("%d",&no3);

    // average mehode 
    division = (no1 + no2 + no3) / 3 ;
    printf("Your number average is = %d ",division);

    return 0;
}
