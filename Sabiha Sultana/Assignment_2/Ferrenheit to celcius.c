#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;
    printf("Enter the value of the Ferrenheit:\n");
    scanf("%f", &f);
    c=((f-32)*5)/9;
    printf("The Celcius value is %.2f", c);
    return 0;
}
