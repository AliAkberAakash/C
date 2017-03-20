#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("a= %d\n\n*p=%d\n\np=%d\n", a, *p, p);
    getch();
}
