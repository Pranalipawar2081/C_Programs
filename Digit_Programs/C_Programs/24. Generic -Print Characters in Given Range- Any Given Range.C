/// Print Character in Given Range
#include<stdio.h>
#include<conio.h>

int main()
{
     char ch = '\0', Start_ch = '\0', End_ch = '\0';

     printf("\n Enter Start Point = ");
     Start_ch = getche();

     printf("\n Enter End Point =  ");
     End_ch = getche();

     if(Start_ch < End_ch)
     {
        for(ch = Start_ch; ch <= End_ch; ch++)
        {
          printf("\n %c",ch);
        }

     }
     else
     {
        for(ch =  Start_ch; ch >= End_ch; ch--)
        {
          printf("\n %c",ch);
        }
     }

        getch();
        return 0;
}
