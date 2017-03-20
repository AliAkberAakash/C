#include<stdio.h>
#include<conio.h>
 int main()
 {
     int n,r_d;
     printf("Enter your number:\n");
     scanf("%d", &n);

     printf("The reverse number is:\n");
     do
     {
         r_d=n%10;
         printf("%d", r_d);
         n=n/10;
     }
     while(n!=0);
     getch();
 }
