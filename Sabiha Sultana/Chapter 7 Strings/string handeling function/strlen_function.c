#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   int len;
    char a[3]={'a','b','\0'};
    char b[4]={'d','e','f','\0'};

    len=strlen(b);
    printf("%d",len);

    return 0;
}
