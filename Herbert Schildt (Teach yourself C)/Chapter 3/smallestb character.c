#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10];
    char temp;
    int i,j=1;
    printf("enter 10 characters.\n");
    for(i=0; i<10; i++)
    {
        scanf("%c", &a[i]);
    }

    for(i=0; j<10; j++)
    {

        for(j=0; j<10; j++)
           {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
           }
    }
    printf("%c",a[0]);
}
