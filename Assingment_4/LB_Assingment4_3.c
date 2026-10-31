#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst , int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is the greater",iFirst);
    }
    
    else
    {
        printf("%d is the greater",iSecond);
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter first Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    FindGreater(iValue1 , iValue2);

    return EXIT_SUCCESS;
}