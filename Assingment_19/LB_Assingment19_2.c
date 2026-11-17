/*
    *   *   *   *       (1,1) (1,2) (1,3) (1,4)
    *   *   *           (2,1) (2,2) (2,3) (2,4)
    *   *               (3,1) (3,2) (3,3) (3,4)
    *                   (4,1) (4,2) (4,3) (4,4)
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iColumn)
{
    int i = 0 , j = 0;

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if((i + j) > 5 )
            {
                printf(" \t",j);
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

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}