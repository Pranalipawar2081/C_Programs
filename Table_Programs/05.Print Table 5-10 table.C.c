///Print Table 5 - 10
#include<stdio.h>
#include<conio.h>

int main()
{

     int R = 1, C = 1;

     for(R = 1; R <= 10; R++)
     {
       for(C = 5; C <= 10; C++)

     {
         printf(" %3d ",R*C);
     }
     printf("\n");
     }
     getch();
     return 0;
}
