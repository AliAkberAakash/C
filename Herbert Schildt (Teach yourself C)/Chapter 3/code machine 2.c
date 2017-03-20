#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter your message:\n");

    c=getch();
    while(c!='r')
    {
        printf("%c", c+1);
        c=getch();
    }
    return 0;
}
