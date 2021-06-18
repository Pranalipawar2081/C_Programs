#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fact = 1, Temp = 0;

    printf("\n Enter Number To Find Factorial = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
         Fact = Fact * Temp;
         Temp--;

    }
    printf("\n Factorial Of %d is = %d", No, Fact);

    getch();
    return 0;


}
