#include<stdio.h>
#include<conio.h>
 int main ()
 {
     int u,v,temp;
     printf("Enter the value of two numbers(u>v):\n");
     scanf("%d %d", &u, &v);

     while(v!=0)
     {
         temp=u%v;
         u=v;
         v=temp;
     }

     printf("GCD is %d\n",u); //display GCD
return 0;
 }
