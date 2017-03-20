#include<stdio.h>
#include<conio.h>
#define Pi 3.1416
int main ()
{
    float a,r,circle,square;
    int c;
    printf("Enter your choice:\n\n1.Area of Square.\n\n2.Area of Circle.\n\n");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
    printf("Enter the value of the Square:\n ");
    scanf("%f",&a);
    square=a*a;
    printf("The area of the Square is:%.2f\n ", square);
    break;
    case 2:
    printf("Enter The radius of the circle:\n");
    scanf("%f", &r);
    circle=Pi*pow(r,2);
    printf("The area of the Circle is:%.2f\n ", circle);
    break;
    default:
    printf("Invalid Choice!!!\n");
    break;
    }
    return 0;
}
