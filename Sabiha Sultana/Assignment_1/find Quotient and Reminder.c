#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the first integer:\n");
    scanf("%d", &a);
    printf("Enter the second integer:\n");
    scanf("%d", &b);
    c=a/b;
    printf("The Quotient is %d\n", c);
    d=a%b;
    printf("The Remainder is %d\n", d);
    return 0;
}
