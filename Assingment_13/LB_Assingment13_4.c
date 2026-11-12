#include<stdio.h>
#include<stdlib.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iFact = 0;
    iFact = 1;

    if(iNo < 0)
    {
        iNo = - iNo ;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iFact = iFact * iDigit;
        }
        iNo = iNo / 10;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}