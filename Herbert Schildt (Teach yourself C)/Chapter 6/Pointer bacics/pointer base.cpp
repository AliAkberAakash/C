#include<stdio.h>

int main()
{
    int *i,in;
    float *f,fl;
    double *d,db;
    char *c,ch;

    i=&in;
    f=&fl;
    d=&db;
    c=&ch;

    printf("%p %p %p %p\n\n", i,f,d,c);

    i++;
    f++;
    d++;
    c++;

    printf("%p %p %p %p\n\n", i,f,d,c);

    return 0;
}
