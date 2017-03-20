#include<stdio.h>
#include<conio.h>
int main ()
{
    int num[20];
    int i, j, n, temp;
    printf("How many numbers?\n");
    scanf("%d",&n);
    printf("Enter your numbers\n");

    for (i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

     for (i=0; i<n; i++)
    {
        printf("%d\t", num[i]);
    }

    for(i=0; i<(n-1); i++)
    {
        for(j=(i+1); j<n; j++)
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
        }
    }

    printf("The sorted numbers are:\n");
      for (i=0; i<n; i++)
    {
        printf("%d\t", num[i]);
    }
}
