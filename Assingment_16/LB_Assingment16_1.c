#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iColumn)
{
    int i = 0 , j = 0;
    char ch = '\0';

    if( iRow != iColumn)
    {
        printf("Invalid Input\n");
        return ;
    }

    for( i = 1; i <= iRow; i++)
    {
        for(j = 1 , ch = 'A'; j <= iColumn ; j++ , ch++)
        {
            printf("%c\t",ch);
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