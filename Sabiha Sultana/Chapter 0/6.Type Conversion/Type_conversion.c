#include<stdio.h>
#include<conio.h>
int main()
{

    int a=100;
    float b=3.1416;
    double c=32.5264;
    char d='c';

    printf("a=%d\t b=%f\t c=%lf\t d=%c\n",a,b,c,d);

    printf("(float)a=%f\n",(float)a);
    printf("(float)b=%f\n",(float)b);
    printf("(float)c=%f\n",(float)c);
    printf("(float)d=%f\n\n\n",(float)d);


    printf("(int)a=%d\n",(int)a);
    printf("(int)b=%d\n",(int)b);
    printf("(int)c=%d\n",(int)c);
    printf("(int)d=%d\n\n\n",(int)d);


    printf("i(char)a=%c\n",(char)a);
    printf("i(char)b=%c\n",(char)b);
    printf("i(char)c=%c\n",(char)c);
    printf("i(char)d=%c\n",(char)d);

    return 0;
}
