/*
    *   *   *   *   *   *   (1,1) (1,2) (1,3) (1,4) (1,5) (1,6)
    *   *               *   (2,1) (2,2) (2,3) (2,4) (2,5) (2,6)
    *       *           *   (3,1) (3,2) (3,3) (3,4) (3,5) (3,6)
    *           *       *   (4,1) (4,2) (4,3) (4,4) (4,5) (4,6)
    *               *   *   (5,1) (5,2) (5,3) (5,4) (5,5) (5,6)
    *   *   *   *   *   *   (6,1) (6,2) (6,3) (6,4) (6,5) (6,6)
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
            if((i == 1 || i == iRow ) || (j == 1 || j == iColumn) || (i == j))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
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