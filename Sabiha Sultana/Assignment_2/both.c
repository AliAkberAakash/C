#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;
    int a;
    printf("Enter your choice:\n");
    printf("1.Celsius to Fahrenheit\n\n2.Fahrenheit to Celsius\n\n");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        printf("Enter the value of the Celsius:\n");
        scanf("%f", &c);
        f=(1.8*c)+32;
        printf("The Fahrenheit value is %.2f", f);
        break;

    case 2:
        printf("Enter the value of the Fahrenheit:\n");
        scanf("%f", &f);
        c=(f-32)/1.8;
        printf("The Celsius value is %.2f", c);
        break;

    default:
        printf("Invalid choice!!!\n");
    }

    return 0;
}
