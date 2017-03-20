#include<stdio.h>

int main()
{
    char str[100];

    *(str+3)='c';

    printf("%c",str[3]);

}
