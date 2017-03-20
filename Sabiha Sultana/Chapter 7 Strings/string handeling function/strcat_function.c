#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[3]={'a','b','\0'};
    char b[4]={'d','e','f','\0'};

    strcat(a,b);
    printf("%s",a);

    return 0;
}
