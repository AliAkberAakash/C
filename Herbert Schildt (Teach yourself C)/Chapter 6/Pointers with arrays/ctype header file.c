#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[30], *p;

    gets(str);

    p=str;

    while(*p)
    {
        *p++=tolower(*p);
    }

    printf("%s\n\n", str);
    p=str;

    while(*p)
    {
        printf("%c", toupper(*p));
        p++;
    }

}
