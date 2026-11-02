#include<stdio.h>
#include<stdlib.h>

int DollarToInr(int iNo)
{
    int iDollar = 0;

    iDollar = 70;

    iNo = iDollar * iNo;
    return iNo;
    
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Value in INR is : %d\n",iRet);

    return EXIT_SUCCESS;
}