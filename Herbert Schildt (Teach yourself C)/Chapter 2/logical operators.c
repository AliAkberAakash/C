#include<stdio.h>
 int main()
 {
     int i,j;
     scanf("%d %d", &i, &j);

     /* Relational Operators */

     printf("%d\n", i<j);
     printf("%d\n", i<=j);
     printf("%d\n", i==j);
     printf("%d\n", i>j);
     printf("%d\n", i>=j);

     /*logical operations */

     printf("%d\n", i&&j);
     printf("%d\n", i||j);
     printf("%d %d\n", !i, !j);

     return 0;
 }
