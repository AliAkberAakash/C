#include<stdio.h>
#include<conio.h>
void main()
{
    char C;
    printf("\n================================");

    printf("\n I am using the function getchar() of C\n please enter a character\n");
    C=getchar();
    printf("The character is %c\n", C);

    printf("\n I am using the function getche() of C\n please enter a character\n");
    C=getche();
    printf("The character is %c\n", C);

    printf("\n I am using the function getch() of C\n please enter a character\n");
    C=getch();
    printf("The character is %c\n", C);

    printf("\n================================");
    getch();
}
