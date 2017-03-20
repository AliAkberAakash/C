#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,area,perimeter;
    printf("Enter the first side of the rectangle:\n");
    scanf("%d", &a);
    printf("Enter the second side of the rectangle:\n");
    scanf("%d", &b);

    area=a*b;
    perimeter=a+b;

    printf("The area of the Rectangle is: %d\n\nThe perimeter of the Rectangle is: %d\n", area,perimeter);
    return 0;
}
