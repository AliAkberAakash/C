#include<stdio.h>
#include<conio.h>
int main ()
{
    float a,b,c,p;
    printf("Enter the first value of the Triangle:\n ");
    scanf("%f",&a);
    printf("Enter the second value of the Triangle:\n ");
    scanf("%f",&b);
    printf("Enter the third value of the Triangle:\n ");
    scanf("%f",&c);
    p=a+b+c;
    printf("The Perimeter of the triangle is %.2f\n", p);
    return 0;
}
