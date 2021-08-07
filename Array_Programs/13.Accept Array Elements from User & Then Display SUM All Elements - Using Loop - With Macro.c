///Accept Array Elements from User & Then Display SUM All Elements - Using Loop - With Macro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()

{
   int i = 0, Bill_Sum = 0, Bill[Size] = {0};

   for(i = 0 ; i < Size ; i++ )
   {
      printf("\n Enter Bill No %d = ", (i+1) );
      scanf("%d",&Bill[i]);

      Bill_Sum += Bill[i];
   }

   getch();
   system("cls");

   printf("\n\n Elements in Array are => \n\n");

   for(i = 0 ; i < Size ; i++ )
   {
      printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
   }
   printf("\n Total Amount Received Today = %d.", Bill_Sum);

   getch();
   return 0;

}
