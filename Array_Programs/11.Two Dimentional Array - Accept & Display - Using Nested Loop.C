#include<stdio.h>
#include<conio.h>

int main()

{
   int r = 0, c = 0, TDA[4][3] = {};

   /// NULL Initialized 2-D Array Display

   for(r = 0; r < 4; r++)
   {
     for(c = 0; c < 3; c++)
     {
       printf("\n Value Of Element [%d][%d] = %d",r,c,TDA[r][c]);

     }
     printf("\n");

   }
   getch();


   /// Accept Element for 2-D Array

   for(r = 0; r < 4; r++)
   {
      for(c = 0; r < 3; c++)
      {
        printf("Enter Value For Element [%d][%d] =",r+1, c+1);
        scanf("%d",&TDA[r][c]);

      }
      printf("\n");

   }
  getch();
  return 0;
}
