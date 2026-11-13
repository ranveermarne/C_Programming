#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Please Enter Full Name\n");
    scanf("%[^\n]s",Name);

    printf("Your Name is %s",Name);

    return EXIT_SUCCESS;
}