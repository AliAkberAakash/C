#include<stdio.h>
int main()
{

    int n,i,j;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
                if (j%2==1)
            {
                printf("1\t");
            }
            else {
                printf("0\t");
            }
            }
            printf("\n");
        }
        else
        {
             for(j=1;j<=i;j++)
            {
                if (j%2==1)
            {
                printf("0\t");
            }
            else {
                printf("1\t");
            }
            }
            printf("\n");
        }
    }
}
