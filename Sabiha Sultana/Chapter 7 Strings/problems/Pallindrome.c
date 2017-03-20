#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    char a[30], b[30];
    int i,l,m;
    printf("Enter your string.\n");
    gets(a);
    l=strlen(a);
    for (i=0;i<l; i++)
    {
        b[i]=a[l-i-1];
    }
    b[i]='\0';
    m=strcmp(a,b);
    if(m==0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    getch();

}
