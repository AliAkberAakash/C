#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char n_1[20],n_2[20],n_3[20],name[40];
    printf("Enter first name, second name and third name.\n");
    scanf("%s%s%s", &n_1,&n_2,&n_3);

    for(i=0; i!=0;i++)
    {
        name[i]=n_1[i];
    }
    name[i]=32;

    for(j=0; j!=0;j++)
    {
        name[i+j+1]=n_2[j];
    }
    name[i+j+1]=' ';

     for(k=0; k!=0;k++)
    {
        name[i+j+k+2]=n_2[k];
    }
    name[i+j+k+2]=' ';

    printf("Using Loop: \n %s\n",name);
    printf("Using string handling function:\n");

    strcat(n_1,n_2);
    strcpy(name,n_1);
    strcat(name,"  ");
    strcat(name,n_3);
    printf("%s",name);

    getch();
}
