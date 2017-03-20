#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main()
{
    struct Books Book1;
    struct Books Book2;

    strcpy(Book1.title, "C programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C programming tutorial");
    Book1.book_id=115771;

    strcpy(Book2.title, "Differential Calculus");
    strcpy(Book2.author, "Abdul Motin");
    strcpy(Book2.subject, "Mathematics");
    Book2.book_id=162868;

    printf("Book1 title: %s\n", Book1.title);
    printf("Book1 author: %s\n", Book1.author);
    printf("Book1 subject: %s\n", Book1.subject);
    printf("Book1 book_id: %d\n\n", Book1.book_id);

    printf("Book2 title: %s\n", Book2.title);
    printf("Book2 author: %s\n", Book2.author);
    printf("Book2 subject: %s\n", Book2.subject);
    printf("Book2 book_id: %d\n\n", Book2.book_id);

    getch();
    return 0;
}
