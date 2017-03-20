#include<stdio.h>
int main()
{
    int ara[3]={1,2,3};
    int *p;
    p= &ara;
    printf("address: %u value:%d\n\n", p, *p);
    p++;
    printf("address: %u value:%d\n\n", p, *p);
    return 0;
}
