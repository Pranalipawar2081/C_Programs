///Print Characters k to b
#include<stdio.h>
#include<conio.h>

int main()
{
      char ch = '\0';

      for(ch = 'k'; ch >= 'b'; ch--)
      {
        printf("\n %c",ch);
      }

      getch();
      return 0;
}
