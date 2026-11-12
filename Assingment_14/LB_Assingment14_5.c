#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iNonFact = 0 , iFact = 0;
    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else if((iNo % iCnt) != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
    }
    return (iFact - iNonFact) ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}