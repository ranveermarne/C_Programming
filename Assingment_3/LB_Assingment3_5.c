#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckVowel( char cValue)
{
    if( cValue == 'a' || cValue == 'e'|| cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' )
    {
        return true;
    }
    return false;
}

int main()
{
    char cValue ='\0';
    int iRet = false;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    iRet= CheckVowel(cValue);

    if(iRet == true)
    {
        printf("Output : True");
    }
    else
    {
        printf("Output : false");
    }



    return EXIT_SUCCESS;
}