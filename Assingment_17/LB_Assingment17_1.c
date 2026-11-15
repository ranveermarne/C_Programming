#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iColumn)
{
    int i = 0 , j = 0;
    int iCount = 0;

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1; j<= iColumn ; j++)
        {
            iCount++;
            if(iCount < 10 && iCount > 0)
            {
                printf("%d\t",iCount);
            }
            else 
            {
                iCount = 1;
                printf("%d\t",iCount);
            }
        }
    printf("\n");

    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}