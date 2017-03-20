/* Write a C program to convert any integer to its binary equivalent. And octal equivalent
Programmer: Aakash
Date:2.3.16 */
#include<stdio.h>
#include<conio.h>

int main()
{
    int x,i=0,a[20],j;
    printf("Enter the Integer number\n");
    scanf("%d", &x); // taking the integer as input
    while(x!=0)
    {
        a[i]=x%2; // Dividing the integer by 2 and storing the MOD in ara[i]
        x=x/2; // dividing x with 2 in order to get rid of the fraction values
        i++; // Increasing the number of I by 1
    }
    printf("The binary equivalent is\n");
    for (j=i-1; j>=0; j--) /*The first value of j is i-1, which means it will be the last element of a[i], so we are reversing the values of a[i] to get the Binary value */
    {
        printf("%d", a[j]); // printing the value of a[j], the loop set the value of j
    }
    getch();
}
