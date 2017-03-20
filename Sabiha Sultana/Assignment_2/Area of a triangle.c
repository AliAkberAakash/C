#include<stdio.h>
#include<conio.h>
int main ()
{
    float b,h,area;
    printf("Enter the base of the Triangle:\n ");
    scanf("%f",&b);
    printf("Enter the height of the Triangle:\n ");
    scanf("%f",&h);
    area=((b*h)/2);
    printf("The area of the triangle is %.2f\n", area);
    return 0;
}
