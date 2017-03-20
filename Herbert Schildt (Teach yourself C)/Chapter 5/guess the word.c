#include<stdio.h>
#include<conio.h>

int main()
{
    char w[]="Fima";
    char s;
    int count=0,i,j=0;

    printf("The length of the word is:\n----\n");

    printf("Guess the letters:\n");

    for(i=0; i<4; i++)
    {
        do
            {
                s=getch();
                j++;

                if(s==w[i])
                {
                    printf("%c", s);
                    break;
                }

                else   count++;

                if (count>15)
                {
                    printf("Game over! Too many Tries!!\n\n");
                    printf("The answer is %s", w);
                    break;
                }
            }while(j<5);
    }

    return 0;
}
