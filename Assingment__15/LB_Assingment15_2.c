#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    if(iNo < 100)
    {
        return FALSE;
    }
    else 
    {
        return TRUE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("please enter number\n");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if( bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}