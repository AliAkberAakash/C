#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int add(int a, int b)
{
    int s=a+b;
    return s;
}

int sub(int a, int b)
{
    int s=a-b;
    return s;
}

int mul(int a, int b)
{
    int s=a*b;
    return s;
}

int main()
{
    char command[80], temp[80];
    int i,j;

    for( ; ; )
    {
        printf("Operation?\n");
        gets(command);

        //checking if the user wants to stop

        if(!strcmp(command,"quit")) break;

        printf("Enter first number:\n");
        gets(temp);
        i=atoi(temp);

        printf("Enter second number:\n");
        gets(temp);
        j=atoi(temp);

        //performing operation

        if(!strcmp(command,"add"))
        printf("%d\n", add(i,j));

        else if(!strcmp(command,"sub"))
        printf("%d\n", sub(i,j));

        else if(!strcmp(command,"mul"))
        printf("%d\n", mul(i,j));

        else printf("Unknown command.\n");
    }

    return 0;

}
