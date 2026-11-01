#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCount = 0;

    if(iNo = -iNo)
    {
        iNo = -iNo;
    }
    
    for(iCount = 1; iNo >= iCount ; iCount++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}