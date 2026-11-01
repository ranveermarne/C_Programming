#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;
    
   for(iCnt = 1; iCnt <= 10; iCnt++)
   {
        printf("%d\t",iCnt * iNo);
   }
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter a digit\n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}