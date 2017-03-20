/*
Program Name: Using forward reference
Details: Exercise
Solved By: Liverwort
Date: 18.6.16
*/

#include<stdio.h>
double avg();

int main()
{
    double x,y,z;

    while(scanf("%lf %lf %lf", &x, &y, &z))
     {
         if(x<0)
            break;

         printf("%lf\n", avg(x,y,z));
     }

    return 0;
}

double avg(double a, double b, double c)
{
    return (a+b+c)/3;
}
