#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("The number is :\n");
    aakash:
        b=a%10;
        printf("%d",b);
        a=a/10;
        for( ; a!=0 ; )
        {
            goto aakash;
        }
}
