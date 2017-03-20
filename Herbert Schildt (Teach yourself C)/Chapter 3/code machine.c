#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter your message:\n");

    c=getche();
    while(c!='r')
    {
        printf("%c", c+1);
        c=getche();
    }
    return 0;
}
