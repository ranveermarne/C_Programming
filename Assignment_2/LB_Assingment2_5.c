#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if( bRet == 1)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return EXIT_SUCCESS;
}