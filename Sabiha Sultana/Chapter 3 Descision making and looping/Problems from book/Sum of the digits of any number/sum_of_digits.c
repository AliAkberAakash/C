/* Write a program in C to compute the sum of the digits a given integer number.
For example, if the input number is 123 then the output should be 6.
Solved by Aakash.
Date:2.3.16
*/
#include<stdio.h>
 int main()
 {
     int a,b,s=0;
     printf("Enter your number:\n");
     scanf("%d", &a);
     while (a!=0)
     {
         b=a%10;
         s+=b;
         a=a/10;
     }
     printf("The sum of the digits is: %d\n", s);
 }
