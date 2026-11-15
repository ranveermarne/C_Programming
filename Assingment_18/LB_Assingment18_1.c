#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iColumn)
{
    int i = 0 , j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1 ; j <= iColumn ; j++)
        {
            if(i < j)
            {
                printf("#\t",j);
            }
            else
            {
                printf("*\t",j);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("enter number of rows\n");
    scanf("%d",&iValue1);

    printf("enter number of column\n");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}