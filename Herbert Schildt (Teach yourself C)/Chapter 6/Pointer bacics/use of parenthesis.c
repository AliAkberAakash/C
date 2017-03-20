#include<stdio.h>

int main()
{
    int *p,q;

    p=&q;

    q=1;
    printf("%p\n\n", p);

    (*p)++;
    printf("%p %d\n\n", p,q);
    *p++;
    printf("%p %d\n\n", p,*p);

    return 0;
}
