#include<stdio.h>
int main()
{
    int a,w=0,r=0;
    printf("What is the sum of 76+89=?\n");
    scanf("%d", &a);
    if(a==165)
    {
        printf("Right answer!\n\n");
        r++;
    }
    else
    {
          printf("Wrong answer!\n\n");
        w++;
    }


    printf("What is the sum of 59+32=?\n");
    scanf("%d", &a);
    if(a==91)
    {
        printf("Right answer!\n\n");
        r++;
    }
    else
    {
          printf("Wrong answer!\n\n");
        w++;
    }
    printf("================================================\n");
    printf("Right answers: %d\n\nWrong Answers:%d\n", r,w);

    return 0;
}
