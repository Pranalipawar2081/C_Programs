//Maximum From 2 Numbers - Using if else .c
#include<stdio.h>
#include<conio.h>

int main()
{
      int num1 = 0, num2 = 0;

             printf("\n Enter 2 Integer Numbers To Find Max From Them:");
      Accept:
             scanf("%d%d", &num1, &num2);

             if(num1 == num2)
             {
                 printf("\n Both Numbers are Equal.");
                 printf("\n==============********==============");
                 printf("\n\n For Comparison There Should Be 2 Different Numbers,");
                 printf("\n Enter 2 New Numbers To Find Max From Them:");
                 goto Accept;
             }

             if(num1 > num2)
             {
                 printf("\n Given 1st Number %d is Maximum. ",num1);
             }
             else
             {
                 printf("\n Given 2nd Number %d is Maximum. ",num2);
             }
             printf("\n Thanks!!!");

             getch();
             return 0;
}
