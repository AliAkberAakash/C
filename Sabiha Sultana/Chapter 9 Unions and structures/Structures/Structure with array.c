#include<stdio.h>
#include<conio.h>
#include<string.h>

struct emp_info
{
    char nm[50];
    int id;
}emp[5];

int main()
{
    int i;

    for(i=0;i<2; i++)
    {
        printf("Enter the name:\n");
        scanf("%s", &emp[i].nm);
        printf("Enter the id:\n");
        scanf("%d", &emp[i].id);
    }

     for(i=0;i<2; i++)
    {
       printf("Employee id: %d\n\n", emp[i].id);
       printf("Employee name: %s\n\n", emp[i].nm);
    }
    getch();
}
