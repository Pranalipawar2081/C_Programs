/// Two Dimentional Array
#include<stdio.h>
#include<conio.h>

int main()

{

    int r =0, c = 0, TDA[4][3] = {{5,8,9},{7,5,8},{57,24,12},{52,37,21}};

    for(r = 0; r < 4; r++)
    {
        for(c = 0; c < 3; c++)
        {
           printf("\n Value Of Elements [%d][%d] = %d",r,c, TDA[r][c]);

        }
        printf("\n");

    }

    getch();
    return 0;



}
