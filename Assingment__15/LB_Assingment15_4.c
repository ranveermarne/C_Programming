#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    int iProduct = 0;

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }
    iProduct = iNo1 * iNo2 * iNo3;

    return iProduct;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0;
    int iRet = 0;

    printf("please enter number\n");
    scanf("%d",&iValue1);

    printf("please enter number\n");
    scanf("%d",&iValue2);

    printf("please enter number\n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1 , iValue2 , iValue3);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}