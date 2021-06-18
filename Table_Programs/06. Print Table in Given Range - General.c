/// Print Table in Given Range
#include<stdio.h>
#include<conio.h>

int main()
{

     int Start_Num = 0, End_Num = 0, R = 1, C = 1;
     printf("\n Enter Range To Print Table =>");
     printf("\n  Note : Start Number Should be less than End Number ");
     printf("\n\n Enter Start Number = ");
     scanf("%d",&Start_Num);
     printf("\n Enter End Number = ");
     scanf("%d",&End_Num);

     printf("\n\n *************** Tables From %d To %d **************\n\n",Start_Num, End_Num);

     for(R = 1; R <= 10; R++)
     {
         for(C = Start_Num; C <= End_Num; C++)
         {
             printf(" %3d ",R*C);
         }
         printf("\n");

     }
        printf("\n****************************************************\n ");

        getch();
        return 0;
}
