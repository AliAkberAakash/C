#include<stdio.h>
sp_to_dash(const char *str);
int main()
{
    sp_to_dash("My name is Aakash.\n");
}

sp_to_dash(const char *str)
{
    while(*str)
    {
        if(*str==32) printf("%c",'_');
        else printf("%c", *str);
        str++;
    }
}
