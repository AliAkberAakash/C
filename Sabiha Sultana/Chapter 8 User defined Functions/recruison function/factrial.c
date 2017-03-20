#include<stdio.h>
#include<conio.h>
int factrial(a);

int main()
{
    int n,f;
    printf("Enter any positive number\n");
    scanf("%d", &n);
    if (n==0)
        printf("The factrial of %d is %d", n,1);
    else
    {
        f=factrial(n);
        printf("The factrial of %d is %d", n,f);
    }
}

int factrial(a)
{
    if (a==1)
        return a;
    else
        return a*factrial(a-1);
}
