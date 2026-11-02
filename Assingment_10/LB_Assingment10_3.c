#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iDistance = 0;

    iDistance = iNo * 1000;


    return iDistance;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is : %d",iRet);

    return EXIT_SUCCESS;
}