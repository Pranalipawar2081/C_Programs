//Swapping of Two Inputed Integer Numbers Without Temporary Variable

#include<stdio.h>
#include<conio.h>

int main()
{

    int a=0, b=0;
    printf("\n Enter 2 Numbers =");
    scanf("%d%d",&a,&b);

    printf("\n Values of Given Numbers Before Swap =>");
    printf("\n a=%d, b=%d", a,b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("\n Values of Given Numbers After Swap =>");
    printf("\n a=%d, b=%d", a,b);

    getch();
    return 0;
}
