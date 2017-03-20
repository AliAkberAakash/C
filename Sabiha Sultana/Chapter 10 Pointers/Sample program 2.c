#include<stdio.h>

int a,b;
int *p;
int main()
{
    a=1;
    b=6;
    p= &b;
    printf("\na has the value %d and is stored at %u\n", a, &a);
    printf("\nb has the value %d and is stored at %u\n", b, &b);
    printf("\np has the value %d and is stored at %u\n", p, &p);
    printf("\nThe value of the integer pointed to by p is %u\n", *p);

    return 0;
}
