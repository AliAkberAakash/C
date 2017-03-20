#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,i,j,k;
    int x[20][20], y[20][20], z[20][20]={0};
    printf("Enter the number of rows and column for matrix X:\n");
    scanf("%d %d", &a,&b);
    printf("Enter the number of rows and column for matrix Y:\n");
    scanf("%d %d", &c,&d);

    if (b==c)
    {
         printf("Enter the elements of Matrix X\n\n");
        for (i=1; i<=a; i++)
        {
            for (j=1; j<=b; j++)
            {
                printf("row%d column%d\n", i,j);
                scanf("%d", &x[i][j]);
            }
        }

         printf("Enter the elements of Matrix Y\n\n");
        for (i=1; i<=c; i++)
        {
            for (j=1; j<=d; j++)
            {
                printf("row%d column%d\n", i,j);
                scanf("%d", &y[i][j]);
            }
        }

         printf("The Multiplication of the matrix is:\n");
         for (i=1; i<=a; i++)
        {
            for (j=1; j<=d; j++)
            {
                for (k=1; k<=c; k++)
                {
                z[i][j]=z[i][j]+x[j][k]*y[k][j];
                }
                printf("%d\t", z[i][j]);
            }
            printf("\n\n");
        }
    }
    else
        printf("Math Error!\n");
}
