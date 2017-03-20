/* Write a program to produce the following form of Floyd's triangle:
1
0 1
1 0 1
0 1 o 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
    int n,x,i,j;
    printf("Enter the number of the steps\n");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if(i%2==0)
            x=0;
        else
            x=1;
        for(j=1; j<=i; j++)
        {
            printf("%d\t", x);
            if (x==0)
                x=1;
            else
                x=0;
        }
        printf("\n");
    }

}
