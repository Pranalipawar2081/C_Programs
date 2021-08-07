#include<stdio.h>
#include<conio.h>

int main()
{
       int i = 0, j = 0, x = 0;
       char ch = 'A';

       printf("Enter No of Rows & Columns Count for Pattern : ");
       scanf("%d",&x);

       printf("\n================Pattern===============\n\n");

       for(i = 1; i <= x; i++ )
       {
              for(ch = 'A', j = 1; j <= x; j++, ch++)
              {

                    if(i >= j)
                    {
                          printf(" %c ",ch);
                    }
                    else
                    {
                          printf("  ");
                    }

             }
             printf("\n");
       }

       printf("\n===================================\n");

       getch();
       return 0;
}
