#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[200];
    int v=0,c=0,d=0,s=0,i;
    gets(str);

    for (i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;
        else if ( (str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z') )
                 c++;
        else if (str[i]>=48 && str[i]<=57)
            d++;
        else if( str[i]==32)
            s++;

    }

        printf("The string has the following characters:\n\nVowels: %d\n\nConsonants: %d\n\nDigits: %d\n\nSpaces:%d\n", v,c,d,s);

    return 0;
}
