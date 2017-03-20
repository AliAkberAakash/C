#include<stdio.h>
int main()
{
    long int a=1,b,c;
    printf("Enter any number:\n");
    scanf("%d", &b);
    for (c=1;c<=b;c++)
    {
        a=a*c;
    }
    printf("%d", a);
}
