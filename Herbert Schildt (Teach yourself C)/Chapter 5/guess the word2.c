#include<stdio.h>
#include<conio.h>

int main()
{
    char w[8]="Fima";
    char s[8];
    int count=0,i,j,m;

    printf("\nThe length of the word is:\n----\n");

    printf("Guess the letters:\n");

    for(i=0; i<4; i++)
    {

        for(j=0; j<3; j++)
            {
                s[i]=getch();
                if(s[i]==w[i])
                {
                    printf("%c", s[i]);
                    count++;
                    break;
                }

                else   count++;

                if (count>11)
          {
                 printf("\nGame over! Too many Tries!!\n\n");
                 printf("The answer is %s\n\n\n", w);
                 break;
          }

            }
    }
        if(!strcmp(s,w)) printf("\n\nCorrect answer! You have won the game in %d tries.\n\n\n", count);

        main();

       return 0;
}
