#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    int a[30],b;

    printf("Enter a string:\n");
    gets(a);
    printf("Lower case string %s\n", strlwr(a));
    printf("Upper case string %s\n", strupr(a));
    printf("Reverse  string %s\n", strrev(a));
    printf("Length of the string %d\n", strlen(a));

    return 0;
}
