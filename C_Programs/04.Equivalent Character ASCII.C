#include<stdio.h>
#include<conio.h>

int main()
{
      int Val = 0;
      char ch = 'A';

      printf("\n Enter an ASCII Value To Get Corresponding Character = ");
      scanf("%d",&Val);

      ch = Val;

      printf("\n\n Character for Given ASCII Value is = %c.", ch);

      getch();
      return 0;
}

