#include<stdio.h>
#include<conio.h>

int main()
{
      int Num1 = 0, Num2 = 0;

            printf("\n Enter 2 Integer Numbers To Find Max From Them:");
      Accept:
             scanf("%d%d",&Num1,&Num2);

             if(Num1 == Num2)
             {
                 printf("\n Both Numbers are Equal.");
                 printf("\n==============********==============");
                 printf("\n Enter 2 New Numbers To Find Max From Them:");
                 goto Accept;

             }

             if (Num1 > Num2)
             {
                 printf("\n Given 1st Number %d is Max ",Num1);
             }
             else

             {
                 printf("\n Given 2nd Number %d is Max ",Num2);
             }
             printf("\n Thanks!!!");

             getch();
             return 0;
}
