/* Write a program to find the first Fibonacci numbers.
Solved by Aakash.
Date:3.3.16
*/
#include<stdio.h>
int main()
{
int a,b,i,s,n;
a=0;
b=1;
printf("Enter the value:\n");
scanf("%d", &n);
printf("The Fibonacci numbers are:\n");
if(n==0)
{
    printf("%d", a);
}
else
{
    printf("%d\t%d\t", a,b);
    for (i=3; i<=n; i++)
    {
    s=a+b;
    a=b;
    b=s;
    printf("%d\t", s);
    }
}

}
