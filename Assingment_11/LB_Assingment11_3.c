#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0 , iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;

}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 , iValue2);

    if(iRet == 0)
    {
        printf("Invalid Input");
    }

    else
    {
        printf("%d\t",iRet);
    }

    return EXIT_SUCCESS;
}