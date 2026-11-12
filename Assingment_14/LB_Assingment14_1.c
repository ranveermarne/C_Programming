#include<stdio.h>
#include<stdlib.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    for(iCnt = 1, iFact = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}