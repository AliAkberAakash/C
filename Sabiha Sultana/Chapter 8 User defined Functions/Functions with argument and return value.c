#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    i=power(5,3);
    printf("%d\n", i);
}
int power(int a, int b)
{
   int i,c;
   if (b==0)
    a=1;
   else if (b==1)
    a=a;
   else
   {
   c=a;
   for(i=2; i<=b; i++)
   {

     a*=c;
   }
   }
   return a;
}
