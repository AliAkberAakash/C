#include<stdio.h>
#include<conio.h>
 int main()
 {
     int a[5]={2,4,6,8,10};
     int b[8]={1,3,5,7,9,11,13,15};
     int c[10]={1,2,3,4,5,6,7,8,9,10};

     printf("%d\n%d\n%d\n", add(a,5),add(b,8), add(c,10));
 }

 int add(int arr[], int n)
 {
     int i,sum=0;
     for(i=0; i<n; i++)
     {
         sum+= arr[i];
     }
      getch();
      return sum;
 }
