/*English to German translator*/

#include<stdio.h>
#include<string.h>

char words [][2][40]=
{
    "dog","Hund",
    "no","nein",
    "year","jahr",
    "Child","Kind",
    "I","Ich",
    "drive","fahren",
    "house","haus",
    "to","zu",
    "  ","  "
};

int main()
{
    char english[80];
    int i;

    printf("Enter the  English word:\n");
    gets(english);

    //looking up the word
    i=0;
    //searching while null string not yet encountered
    while(strcmp(words[i][0],"  "))
    {
        if(!strcmp(english,words[i][0]))
        {
            printf("German translation is: %s\n",words[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(words[i][0], "  "))
        printf("Not in array.\n");

    return 0;
}
