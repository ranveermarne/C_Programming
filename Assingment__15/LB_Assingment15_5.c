#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1 , int iNo2)
{
    float fPercent = 0.0f;
    fPercent = ((float) iNo2 / (float) iNo1) * 100.0;
    return fPercent;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0;
    float fRet = 0.0f;

    printf("Please Enter Total Marks\n");
    scanf("%d",&iValue1);

    printf("Please Enter Obtained Mareks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1 , iValue2);

    printf("%f\n",fRet);

    return EXIT_SUCCESS;
}