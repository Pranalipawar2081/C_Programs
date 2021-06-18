#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, ZCnt = 0;

    printf("\n Enter Number To Find No of Digit = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
      if((Temp % 10) == 0)
      {
          ZCnt++;
      }

      Temp = Temp /10;

    }

    printf("\n Count of Zero Digits in %d is = %d.",No, ZCnt);

    getch();
    return 0;
}
