/* solved by : Aakash
date: 18/4/16 */
#include<stdio.h>
int main()
{
    int a=85,b,i;
    printf("Enter any integer number from 1 to 100:\n");
    for(i=1; i<11; i++)
    {
         scanf("%d", &b);
         if(b!=a)
         {
            printf("Wrong answer!!!\n\nTry again:\n");
         }
         else
         {
            printf("Right amswer!!!!!\n\n");
            break;
         }
    }
    printf("Tried %d times.\n", i);
    return 0;
}
