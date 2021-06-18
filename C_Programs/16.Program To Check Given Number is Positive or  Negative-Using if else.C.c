//Program to Check Given Number is Even or Odd  - Using if else.c
#include<stdio.h>
#include<conio.h>

int main()
{
           int Num = 0 ;

           printf("\n Enter an Integer Number To Check Whether it is Positive or Negative : ");
           scanf("%d",&Num);

           if(Num == 0)
           {
                printf("\n Number %d is POSITIVE.",Num);
           }
           else
           {
                printf("\n Number %d is NEGATIVE.",Num);
           }

           printf("\n Bye Bye!!! \n\n Press Any Key To Quit!!!");

           getch();
           return 0;
}
