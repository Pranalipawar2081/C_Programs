///Program to Check Given Number is Even or Odd  - Using if else.c
#include<stdio.h>
#include<conio.h>

int main()
{
       int num = 0;

       UP :
           printf("\n Enter an Integer Number to Check Whether it is Even or Odd: ");
           scanf("%d",&num);

           if(num == 0)
           {
                printf("\n Given Number %d is Neutral...\n ",num);
                goto UP;
           }

           (num % 2 == 0) ?  printf("\n Number %d is EVEN.",num) :   printf("\n Number %d is ODD.",num);

           printf("\n\n\n Bye Bye!!! \n Press Any Key To Quit!!!");

           getch();
           return 0;
}

