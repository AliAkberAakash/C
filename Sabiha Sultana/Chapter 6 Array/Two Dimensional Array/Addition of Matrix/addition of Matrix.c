#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], s[3][3],i,j;
    printf("Enter the values of Matrix a\n");

    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the values of Matrix b\n");

    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
     for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
        s[i][j]=a[i][j]+b[i][j];
        printf("%d\t", s[i][j]);
        }
        printf("\n");
    }
}
