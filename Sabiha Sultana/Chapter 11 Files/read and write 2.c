#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    FILE *fp1;
    fp1=fopen("INPUT.txt","w");
    printf("Enter the data in the file input\n");
    while((ch=getchar())!='.')
    {
        putc(ch,fp1);
    }
    fclose(fp1);

        //opening a file in r mode

    printf("\nDisplaying data from the file INPUT\n\n");
    fp1=fopen("INPUT.txt","r");
    while((ch=getc(fp1))!=EOF)
    {
       printf("%c", ch);
    }
    fclose(fp1);
    getch();
}
