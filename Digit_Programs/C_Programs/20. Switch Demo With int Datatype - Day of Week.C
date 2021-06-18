#include<stdio.h>
#include<conio.h>

int main()
{
     char Day;
     char ch = '\0';

     printf("\n Enter a Day Number (1 - 7) = ");
     scanf("%d",&Day);

     switch(Day)
     {
       case 1:
            printf("\n MONDAY");
            break;
       case 2:
            printf("\n TUESDAY");
            break;
       case 3:
            printf("\n WEDNESDAY");
            break;
       case 4:
            printf("\n THURDAY");
            break;
       case 5:
            printf("\n FRIDAY");
            break;
       case 6:
            printf("\n SATURDAY");
            break;
       case 7:
            printf("\n SUNDAY");
            break;
       default:
            printf("\n INVALID DAY VALUE!!!");
            break;
     }

     printf("\n\n Thanks For Input...Press A Key To Close...");

     getch();
     return 0;

}
