#include<stdio.h>
#include<conio.h>
int s;
void sum(int a, int b)
{
    s=a+b;
}
int main()
{
   sum(10,20);
   printf("%d", s);
}
