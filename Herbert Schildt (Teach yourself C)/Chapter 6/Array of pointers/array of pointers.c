#include<stdio.h>
#include<string.h>

char *p[][2]={
    "Red delicious","red"
    "Golden delicious","yellow",
    "Winesap","red",
    "Gala","reddish orange",
    "Lodi","green",
    "Mutsu", "yellow",
    "cortland", "red",
    "Jonathan","red",
    "\0","\0"
    };

int main()
{
    int i;
    char apple[80];

    printf("Enter the name of the apple\n");
    gets(apple);

    for(i=0; *p[i][0]; i++)
        {if(!strcmp(apple, p[i][0]))
        printf("%s is %s\n", apple, p[i][1]);
        }
    return 0;
}
