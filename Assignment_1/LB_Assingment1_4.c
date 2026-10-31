#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not divisible by 5 \n");
    }

    return EXIT_SUCCESS;
}