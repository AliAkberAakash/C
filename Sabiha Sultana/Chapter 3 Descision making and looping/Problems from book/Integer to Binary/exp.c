#include<stdio.h>
#include<conio.h>

int main()
{int i,j,c,temp;
int ara[]={1,2,3,4,5,6};
c=6;
   for (i=0,j=5;i<6;i++,j--)
    {
       ara[i]=temp;
       ara[i]=ara[j];
       printf("%d", ara[i]);
       ara[i]=temp;
    }
}
