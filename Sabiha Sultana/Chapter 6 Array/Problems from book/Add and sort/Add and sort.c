#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a[10],b[10], c[30];
    int m,n,o,p,q,i,j;
    printf("Enter the number of elements for A:\n");
    scanf("%d", &m);
    printf("Enter the elements of A:\n");
    for (i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }
    o=a[m-1];
    printf("\n========================\n");
     for (i=0; i<m; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n========================\n");

    printf("\nEnter the number of elements for B:\n");
    scanf("%d", &n);
    printf("Enter the elements of B:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d ", &b[i]);
    }
    p=b[n-1];
    printf("\n========================\n");
     for (i=0; i<n-1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n========================\n");
    printf("The elements of c is:\n");

    for (i=0; i<m; i++)
    {
    c[i]=a[i];
    }
    for (i=0,j=m; i<n,j<m+n; i++,j++)
    {
    c[j]=b[i];
    }
    printf("\n========================\n");
    for (i=0; i<m+n; i++)
    {
    printf("%d ", c[i]);
    }
    printf("\n========================\n");

    printf("Sorted C:\n");
    printf("\n========================\n");
    if(o>p)
        q=o;
    else
        q=p;
    for(i=1; i<=q; i++)
    {
        for(j=0; j<m+n; j++)
        {
            if (c[j]==i)
            printf("%d ", c[j]);
        }
    }
    printf("\n========================\n");

    }
