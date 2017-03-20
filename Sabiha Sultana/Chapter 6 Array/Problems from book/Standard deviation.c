#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,i;
    float v[100],sum=0.0,mean,sumsqrt=0.0,deviation,stdd,variance;

    printf("How many items?\n");
    scanf("%d", &n);
    printf("Input values:\n");

     for(i=1; i<=n; i++)
     {
         scanf("%f", &v[i]);
         sum+=v[i];
     }
     mean=sum/n;

     for(i=1; i<=n; i++)
     {
         deviation=v[i]-mean;
         sumsqrt+=pow(deviation,2);
     }
     variance=sumsqrt/n;
     stdd=sqrt(variance);
     printf("Number of items=%d\n\n",n);
     printf("Mean=%f\n\n", mean);
     printf("standard deviation=%f", stdd);

     return 0;
}
