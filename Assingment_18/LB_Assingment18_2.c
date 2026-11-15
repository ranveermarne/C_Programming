/*
11 12 13 14     *   *   *   *
21 22 23 24     *   *   *   #
31 32 33 34     *   *   #   #
41 42 43 44     *   #   #   #
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iColumn)
{
    int i = 0 , j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1 ; j <= iColumn ; j++)
        {
            if((i + j) > 5)
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