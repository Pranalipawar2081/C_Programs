/// Print Table of Given Number
#include<stdio.h>
#include<conio.h>

int main()
{

     int No = 0, Cnt = 0;

     printf ("\n Enter a Number to print its Table Reverse = ");
     scanf("%d",&No);

     for(Cnt = 10; Cnt >= 1; Cnt--)
     {
         printf("\n %-2d * %2d = %-3d",No, Cnt, (Cnt*No));
     }
        getch();
        return 0;
}
