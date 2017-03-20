#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,a[3][3];
   int *p;
   p= &a[0][0];

   for(i=0; i<=2; i++)
   {
       for(j=0; j<=2; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }

   for(i=0; i<=2; i++)
   {
       for(j=0; j<=2; j++, p++)
       {
           printf("%d\t", *p);
       }
       printf("\n");
   }

}
