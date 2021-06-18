///Program to Check The Given Character is Uppercase or Lowercase or Digit or Special Symbol.
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character = ");
    ch = getche();

    if( (ch >= 'A') && (ch <= 'Z') )

    {
        printf("\n\n Given Character is Uppercase.");
    }
    else if( (ch >= 'a') && (ch <= 'z') )
    {
        printf("\n\n Given Character is Lowercase.");
    }
    else if( (ch >= '0') && (ch <= '9') )
    {
        printf("\n\n Given Character is Digit.");
    }
    else
    {
         printf("\n\n Given Character is Special Symbol.");
    }

    getch();
    return 0;
}

