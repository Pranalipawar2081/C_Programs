///Program to check the given character is Uppercase or Lowercase.
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
    else
    {
        printf("\n\n Given Character is Neither Uppercase Nor Lowercase.");
    }

    getch();
    return 0;
}
