#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,i,j,temp;
    int ara[50];
    printf("Enter any integer number:\n");
    scanf("%d", &a);
    c=0;
    do
    {
        b=a%2;
        ara[c]=b;
        c++;
        a=a/2;
    }
    while(a!=0);
    for (i=0,j=(c-1);i<c;i++,j--)
    {
       temp=ara[i];
       ara[i]=ara[j];
       printf("%d", ara[i]);
       ara[i]=temp;
    }
}
