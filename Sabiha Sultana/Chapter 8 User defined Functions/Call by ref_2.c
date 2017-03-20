#include<stdio.h>
#include<conio.h>

int main()
{
    int a=50, b=70;
    printf("a=%d and b=%d", a,b);
    intercgange (a,b);
    printf("now a=%d b=%d",a,b);
    return 0;
}
void interchnge(int a1, int b1)
{
    int t;
    t=a1;
    a1=b1;
    b1=t;
    printf("a1=%d b1=%d", a1, b1);
}
