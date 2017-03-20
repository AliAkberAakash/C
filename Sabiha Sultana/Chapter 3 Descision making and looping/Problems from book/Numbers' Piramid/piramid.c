/* Given an integer number, write a program that displays the number as follows:
First line: all digits
Second line: all digits except first digit
.........................................
.........................................
Last line: last digit

Solved by Aakash
Date:3.3.16
*/
#include<stdio.h>
int main()
{
    int a,i=0,j,z[20];
    printf("Enter any integer number:\n");
    printf("__________________________________________\n\n");
    scanf("%d", &a);
    while(a!=0)
    {
        z[i]=a%10;
        a=a/10;
        i++;
    }
    aakash:
    for(j=i-1;j>=0;j--)
    {
        printf("%d", z[j]);
    }
    i--;
    if(i>0)
    {
        printf("\n");
        goto aakash;
    }
    else
    {
        printf("\n__________________________________________");
    }
}
