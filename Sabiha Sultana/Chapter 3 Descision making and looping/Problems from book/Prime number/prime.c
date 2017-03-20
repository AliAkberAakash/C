/*
Write a program to determine weather a number is prime or not
Solved by Aakash.
Date: 6.3.16
*/
#include<stdio.h>
 int main ()
 {
     int n, i, p=1;
     printf("Enter any enteger number:\n");
     scanf("%d", &n);
     for(i=2; i<n/2; ++i)
     {
         if(n%i==0)
         {

             p=0;
             break;
         } //closing the if statement
     } // closing the for loop
     if(p==1)
        printf("%d is prime.", n);
     else
        printf("%d is not prime.", n);
     return 0;
 }
