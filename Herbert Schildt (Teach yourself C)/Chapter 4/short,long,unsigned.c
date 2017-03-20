#include<stdio.h>
int main()
{
    unsigned u;
    long l;
    short s;

    scanf("%u %ld %hd", &u,&l,&s);
    printf("%u\n%ld\n%hd\n", u,l,s);

    return 0;
}
