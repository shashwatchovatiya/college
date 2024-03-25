#include<stdio.h>
int main()
{
    float rnumber , rcnumber;
    int nnumber , cnnumber;

    printf("Enter one real number = \n");
    scanf("%f",&rnumber);

    printf("Enter one natural number = \n");
    scanf("%d",&nnumber);

    // Here is a variable change for a real number
    rcnumber = rnumber ;
    printf("Here is a variable change for a real number = %f \n",rcnumber);
    // Here is a variable change for a natural number
    cnnumber = nnumber ;
    printf("Here is a variable change for a natural number = %d \n",cnnumber);
    return 0;
}