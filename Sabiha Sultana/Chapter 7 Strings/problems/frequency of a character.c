#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char c[100], ch;
    int i, frequency=0;

    printf("Enter a string\n");
    gets(c);
    printf("Enter the letter you want to find\n");
    scanf("%c", &ch);

    for (i=1; c[i]!='\0'; i++)
    {
        if (c[i]==ch)
            frequency++;
    }
    printf("The letter %c appears %d times.\n", ch,frequency);
    return 0;
}
