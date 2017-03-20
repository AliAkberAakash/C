#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char p;
    b=0;
    printf("===================================\n\n");
    add:
    scanf("%d", &a);
    b+=a;
    scanf("%c", &p);
    switch (p) {
    case '+' :
        goto add;
    case '=' :
        printf("%d\n\n", b);
    printf("===================================");
    }

    }

