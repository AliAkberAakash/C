#include<stdio.h>
#include<string.h>
char encode();

char encode(char d[200])
{
    int l,i,j;

    j=strlen(d)-1;
    l=j/2;
    for(i=0; i<l, j>l; i++, j--)
    {
        printf("%c%c", d[i],d[j]);
    }

    if(j%2==0)
        printf("%c", d[l]);

    printf("\n\n");
}


int main()
{
    char s[200];
    printf("Enter any paragraph.\n");

    gets(s);

    encode(s);

    main();

    return 0;
}
