#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iCountEven = 0 , iCountOdd = 0;
    int iDifference = 0;

    if(iNo < 0)
    {
        iNo = - iNo ;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCountEven = iCountEven + iDigit;
        }
        else if(iDigit % 2 == 1)
        {
            iCountOdd = iCountOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    iDifference = iCountEven - iCountOdd;
    return iDifference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}