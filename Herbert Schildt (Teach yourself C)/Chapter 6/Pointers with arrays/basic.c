#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5};

    int *p;

    p=a;

    printf("%d %d %d\n\n", *p, *(p+1), *(p+2));

    printf("%d %d %d\n\n", a[0], p[1], p[2]);

}
