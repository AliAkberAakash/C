#include<stdio.h>
int main ()
{

    int n,c,d,value_1,value_n;
    printf("Enter the number of variables you want to work with:\n");
    scanf("%d",&n);
    n=n-1;
    printf("Enter your choice:\n 1.Sum\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Enter the first value:\n");
        scanf("%d",&value_1);
        for(d=1;d<=n;d++){
            printf("Enter the other value(s):\n");
            scanf("%d",&value_n);
            value_1+=value_n;
            }
            printf("The SUM is: %d\n", value_1);
            break;

            case 2:
        printf("Enter the first value:\n");
        scanf("%d",&value_1);
        for(d=1;d<=n;d++){
            printf("Enter the other value(s):\n");
            scanf("%d",&value_n);
            value_1-=value_n;
            }
            printf("The Substractionis: %d\n", value_1);
            break;

            case 3:
        printf("Enter the first value:\n");
        scanf("%d",&value_1);
        for(d=1;d<=n;d++){
            printf("Enter the other value(s):\n");
            scanf("%d",&value_n);
            value_1*=value_n;
            }
            printf("The Multiplication is: %d\n", value_1);
            break;

            case 4:
        printf("Enter the first value:\n");
        scanf("%d",&value_1);
        for(d=1;d<=n;d++){
            printf("Enter the other value(s):\n");
            scanf("%d",&value_n);
            value_1/=value_n;
            }
            printf("The Division is: %d\n", value_1);
            break;

            default:
                printf("The Option is INVALID!!!!");
                break;
        }
    return 0;
}
