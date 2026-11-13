#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNo1 , int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0 , iValue2 = 0;
    BOOL bRet = FALSE;

    printf("please enter number\n");
    scanf("%d",&iValue1);

    printf("please enter number\n");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1 , iValue2);

    if( bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    return EXIT_SUCCESS;
}