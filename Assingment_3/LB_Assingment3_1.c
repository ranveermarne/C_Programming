#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int even = 0;
    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        even = even + 2;
        printf("%d\t",even);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}