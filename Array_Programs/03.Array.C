#include<stdio.h>
#include<conio.h>

int main()

{
       int Values[5]  = {21, 55};

       printf("\n Value of 1st Element = %d",Values[0]);
       printf("\n Value of 2nd Element = %d",Values[1]);
       printf("\n Value of 3rd Element = %d",Values[2]);
       printf("\n Value of 4th Element = %d",Values[3]);
       printf("\n Value of 5th Element = %d",Values[4]);

       getch();

       Values[4] = 58;
       Values[2] = 143;
       Values[0] = 6;

       printf("\n Value of 1st Element = %d",Values[0]);
       printf("\n Value of 2nd Element = %d",Values[1]);
       printf("\n Value of 3rd Element = %d",Values[2]);
       printf("\n Value of 4th Element = %d",Values[3]);
       printf("\n Value of 5th Element = %d",Values[4]);

       getch();
       return 0;
}
