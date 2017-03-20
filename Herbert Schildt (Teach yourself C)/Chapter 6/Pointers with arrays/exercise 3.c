#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10000];
    char *p1;
    int i;


    gets(str1);

    p1 = str1;

    for(i=0; i<strlen(str1); i++)
    {
        if(*(p1+i)==' ')
            while(i<strlen(str1))
            {
                printf("%c", *(p1+i+1));

                i++;
            }
    }

}
