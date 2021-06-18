#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Sum = 0;

    printf("\n Enter a Positive Integer Number To Find Digit Sum = ");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Sum += (Temp % 10),Temp /= 10);

    printf("\n Sum of Digits in %d is = %d.",No, Sum);

    getch();
    return 0;

}

