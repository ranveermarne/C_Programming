#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligiblity(int iAge)
{
    if(iAge > 18)
    {
        printf("Eligible For Voting");
    }
    else if(iAge < 0)
    {
        printf("Invalid Age");
    }
    else
    {
        printf("Not Eligible For Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter Age:\n");
    scanf("%d",&iAge);

    CheckVotingEligiblity(iAge);

    return EXIT_SUCCESS;
}