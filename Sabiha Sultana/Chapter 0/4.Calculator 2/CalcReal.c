#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char p;

    scanf("%d",&a);

    calc:
        scanf("%c",&p);
        switch(p){
        case '+':
            scanf("%d",&b);
            a+=b;
            goto calc;
            break;
        case '-' :
            scanf("%d",&b);
            a-=b;
            goto calc;
            break;
        case '*':
            scanf("%d",&b);
            a*=b;
            goto calc;
            break;
        case '/':
            scanf("%d",&b);
            a/=b;
            goto calc;
            break;
        case '=':
            printf("%d",a);
            break;
        default:
            printf("Math Error!");
            break;


        }
}
