#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1 , iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else if(iCnt % 2 == 1)
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return (iEvenFact - iOddFact);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("%d\t",iRet);

    return EXIT_SUCCESS;
}