#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Cnt = 0;

    printf("\n Enter Number To Find No of Digits = ");
    scanf("%d",&No);

    Temp = No;

    if(Temp < 0)
    {
         while(Temp < 0)
         {
              Temp = Temp / 10;
              Cnt++;
         }

    }


    {

          while(Temp > 0)
         {

              Temp = Temp / 10;
              Cnt++;
         }

    }

    printf("\n Count of Digits in %d is = %d.",No, Cnt);

    getch();
    return 0;

}
