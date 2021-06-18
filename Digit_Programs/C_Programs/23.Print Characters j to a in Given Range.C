///Print Characters j to a
#include<stdio.h>
#include<conio.h>

int main()
{
      char ch = '\0';

      for(ch = 'j'; ch >= 'a'; ch--)
      {
        printf("\n %c",ch);
      }

      getch();
      return 0;
}
