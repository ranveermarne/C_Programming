#include<stdio.h>
#include<stdlib.h>

double CircleArea(float Radius)
{
    double dArea = 0.0;

    dArea = 3.14 * (double)Radius * (double)Radius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);

    return EXIT_SUCCESS;
}