///Print Table of Given Number

#include<stdio.h>
#include<conio.h>

int main()
{

     int No = 0, Cnt = 1;

     printf ("\n Enter a Number To Print its Table = ");
     scanf("%d",&No);

     while(Cnt <= 10)
     {
         printf("\n %d", Cnt * No);

         Cnt++;
     }
        getch();
        return 0;
}
