#include<stdio.h>
int main ()
{
    int x;
    printf("Enter any number:\n");
    scanf("%d",&x);
    if ((x==0)||(x==1)||(x==2))
   {
       printf("%d is a Prime Number.\n",x);
   }
    else if((x%2==0)||(x%3==0)||(x%5==0)||(x%7==0)||(x%9==0))
    {
        printf("%d is not a Prime Number.\n",x);
    }
    else
    {
        printf("%d is a prime number\n",x);
    }
    return 0;
}
