#include<stdio.h>

int main()
{
    int *p;
    float q,temp;

    temp=123.45;

    p=&temp;
    q=*p;

    printf("%f", q);

}
