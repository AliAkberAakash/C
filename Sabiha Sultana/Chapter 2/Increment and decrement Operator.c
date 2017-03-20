#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i=5,j=10;
    x=i++;
    y=j--;
    printf("x=%d i=%d\n\ny=%d j=%d\n\n\n", x,i,y,j);

    i=5;
    j=10;
    x=++i;
    y=--j;

    printf("x=%d i=%d\n\ny=%d j=%d", x,i,y,j);

    return 0;
}
