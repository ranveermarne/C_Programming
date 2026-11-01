#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    
   for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return EXIT_SUCCESS;
}