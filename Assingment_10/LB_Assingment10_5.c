#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;
    
    dMeter = 0.0929 * iValue;

    return dMeter;
}

int main()
{
    int iValue = 0 ;
    double dRet = 0;

    printf("Enter Area in SquareFeet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf",dRet);

    return EXIT_SUCCESS;
}