/* Write a program in C to determine and print the sum of the following harmonic series for a given value of n,
s= 1+1/2+1/3+........1/n
Solved by Aakash.
Date:2.3.16
*/
#include<stdio.h>

 int main()
 {
     int n;
     float i,s=0.00;
     printf("Enter the value of n:\n");
     scanf("%d", &n);
     for(i=1; i<=n; i++ )
     {
         s=s+(1/i);
     }
     printf("The sum of the series is= %.2f\n",s);
 }
