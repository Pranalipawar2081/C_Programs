///Program to Check Given Number is Even or Odd  - Using if else.C
#include<stdio.h>
#include<conio.h>

int main()
{
           int Num = 0 ;

           printf("\n enter an integer number to check whether it is even or odd : ");
           scanf("%d",&Num);

           if(Num == 0)
           {
                printf("\n Number %d is EVEN.",Num);
           }
           else
           {
                printf("\n Number %d is ODD.",Num);
           }

           printf("\n Bye Bye!!! \n\n Press Any Key To Quit!!!");

           getch();
           return 0;
}

