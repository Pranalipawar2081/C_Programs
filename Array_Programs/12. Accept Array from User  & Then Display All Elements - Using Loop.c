///Accept Array Elements from User & Then Display All Elements

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()

{
   int i = 0, Bill[Size] = {0};

   for(i = 0 ; i < Size ; i++ )
   {
      printf("\n Enter Bill No %d = ", (i+1) );
      scanf("%d",&Bill[i]);
   }

   getch();
   system("cls");

   printf("\n\n Elements in Array are => \n\n");

   for(i = 0 ; i < Size ; i++ )
   {
      printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
   }

   getch();
   return 0;

}





















