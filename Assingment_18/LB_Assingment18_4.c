/*
11 12 13 14 15     *   *   *   *    *
21 22 23 24 25     *   @   @   @    *
31 32 33 34 35     *   @   @   @    *
41 42 43 44 45     *   @   @   @    *
51 52 53 54 55     *   @   @   @    *
61 62 63 64 65     *   *   *   *    *    
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
            if((j>1 && j<5) && (i>1 && i<6))
            {
                printf("@\t",j);
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