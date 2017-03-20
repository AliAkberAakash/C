#include<stdio.h>
#include<conio.h>

struct std_res
{
    int roll;
    char name[30];
    struct marks
    {
       char sub[10];
       int marks;
    };

};
int main()
{
    struct std_res a[10];
    struct marks b[10];
    int i,j,n;

    printf("Enter the number of students.\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter name:\n");
        scanf("%s", &a[i].name);
        printf("Enter roll:\n");
        scanf("%d", &a[i].roll);

        for(j=0; j<3;j++)
        {
            printf("Enter sub name:\n");
            scanf("%s", &b[j].sub);
            printf("Enter sub marks:\n");
            scanf("%d", &b[j].marks);
        }
        printf("\n\n");

    }

        for(i=0; i<n; i++)
    {

        printf("Name: %10s\n", a[i].name);
        printf("Roll: %10d\n", a[i].roll);

        for(j=0; j<3;j++)
        {
            printf("%4s: ", b[j].sub);
            printf("%10d\n", b[j].marks);
        }
        printf("\n\n");

    }
    return 0;
}
