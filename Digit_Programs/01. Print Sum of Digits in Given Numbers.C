#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0, Sum = 0;

    printf("\n Enter a Positive Integer Number To Find Digit Sum = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
      Dig = Temp % 10;

      Sum = Sum + Dig;

      Temp = Temp / 10;

    }
    printf("\n Sum of Digits in %d is = %d.",No, Sum);

    getch();
    return 0;

}
