#include<stdio.h>
#include<string.h>

int main()
{
    char a[5]="Fima";
    char c;
    int i,j;
    int count=0, win=0;

    printf("word length: ----\n\nGuess the word(in less than 15 tries).\n");

    for(i=0; i<16; i++)
    {
        c=getch();

       for(j=0; j<4; j++)
        {
           if(c==a[j])
           {
               printf("%c", a[j]);
               win++;
               break;
           }
        }

        if(win==4)
        {
            printf("\nCongratulations. You have won the game in %d tries.\n\n\n", i+1);
            break;
        }

        if(i>14)
           {
               printf("\nGame over. Too many tries.\n\n\n");
               break;
           }

    }

    main();
}
