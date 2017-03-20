#include<stdio.h>
#include<conio.h>

struct result
{
    int rno,mrks[5];
    char nm;
}res;

int main()
{
    int i, total=0;
    printf("\n\tEnter Roll Number:");
    scanf("%d", &res.rno);
    printf("\n\tEnter marks of three Subjects:\n");
    for(i=0;i<3; i++)
    {
        printf("\t");
        scanf("%d", &res.mrks[i]);
        total+=res.mrks[i];
    }

    printf("\n\n\tRoll Number:\t%d", res.rno);
    printf("\n\n\tMarks are:");

     for(i=0;i<3; i++)
    {
        printf("\t%d,",res.mrks[i] );
    }
    printf("\n\n\tTotal is:\t%d", total);
    getch();
    return 0;

}
