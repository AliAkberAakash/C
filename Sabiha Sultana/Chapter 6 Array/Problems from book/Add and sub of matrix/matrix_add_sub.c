#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
 {
     int a[20][20], b[20][20], c[20][20];
     int i,j,m,n;

     printf("Enter the number of rows:\n");
     scanf("%d",&m);
     printf("Enter the number of columns:\n");
     scanf("%d",&n);

     printf("==================================\n");
     printf("Enter the elements of Matrix A:\n");
     printf("==================================\n");

     for(i=0; i<m; i++)
     {
         for (j=0; j<n; j++)
            scanf("%d", &a[i][j]);
     }
     printf("==================================\n");
      for(i=0; i<m; i++)
     {
         for (j=0; j<n; j++)
         {
            printf("%d\t", a[i][j]);
         }
         printf("\n\n");
     }
     printf("==================================\n");
      printf("Enter the elements of Matrix B:\n");
      printf("==================================\n");

      for(i=0; i<m; i++)
     {
         for (j=0; j<n; j++)
            scanf("%d", &b[i][j]);
     }
     printf("==================================\n");
      for(i=0; i<m; i++)
     {
         for (j=0; j<n; j++)
         {
            printf("%d\t", b[i][j]);
         }
         printf("\n\n");
     }
     printf("==================================\n");
     printf("The sum of the Matrix is:\n");
      printf("==================================\n");
      for(i=0; i<m; i++)
     {
         for (j=0; j<n; j++)
         {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t", c[i][j]);
         }
         printf("\n\n");
     }
     printf("==================================\n");
      printf("The subtraction of the Matrix is:\n");
      printf("==================================\n");
      for(i=0; i<m; i++)
     {
         for (j=0; j<n; j++)
         {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t", c[i][j]);
         }
         printf("\n\n");
     }
     printf("==================================\n");

 }
