/* write a program to convert ounce to cup (1 cup = 8 ounces) using user defined function.
Solved by: Aakash
Date: 18/4/2016 */

#include<stdio.h>
int o_to_c(float a);
int main()
{
    float o;
    printf("Enter the value of Ounces:\n");
    scanf("%f", &o);
    o_to_c(o);
    return 0;
}

int o_to_c(float a)
{
    float b;
    b=a/8.00;
    printf("%.2f ounces = %.2f cups\n\n", a,b);

}
