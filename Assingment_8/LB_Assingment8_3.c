#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iFact = 0;
    int iCnt = 0;

    for(iCnt = 1 , iFact=1 ; iCnt <= iNo ; iCnt++)
    {
        iFact = iCnt * iFact;
    }
    return iFact;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter a digit\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is %d ",iRet);

    return EXIT_SUCCESS;
}