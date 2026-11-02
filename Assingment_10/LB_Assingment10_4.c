#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    float fCelcius = 0.0f;

    fCelcius = ((fTemp - 32.0) * (5.0 / 9.0));

    return fCelcius;
}

int main()
{
    float fValue = 0 ;
    double dRet = 0;

    printf("Enter Temperature in Fahrenhit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("temp in celcius is : %lf",dRet);

    return EXIT_SUCCESS;
}