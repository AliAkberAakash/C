#include<stdio.h>
#include<conio.h>
int main()
{
   int TK,USD,BRTP,choice;
   printf("Enter your choice: \n1.US Dollar to TK \n2.British Pound to TK\n3.TK to US Dollar\n4.Tk to British Pound\n5.US Dollar to British Pound\n6.British Pound to Us Dollar\n");

   scanf("%d", &choice);

   switch(choice) {
   case 1:
    printf("Enter the amount of Dollar(s):\n");
    scanf("%d", &USD);
    float TK=USD*78.42;
    printf("TK=%.2f",TK);
    break;

   case 2:
    printf("Enter the amount of Pound(s):\n");
    scanf("%d", &BRTP);
    TK=BRTP*108.79;
    printf("TK=%.2f",TK);
    break;


    case 3:
    printf("Enter the amount of TK(s):\n");
    scanf("%d", &TK);
    float USD=TK/78.42;
    printf("USD=%.2f",USD);
    break;

    case 4:
    printf("Enter the amount of TK(s):\n");
    scanf("%d", &TK);
    float BRTP=TK/108.79;
    printf("BRTP=%.2f",BRTP);
    break;

    case 5:
    printf("Enter the amount of Dollar(s):\n");
    scanf("%d", &USD);
    BRTP=USD*1.39;
    printf("BRTP=%.2f",BRTP);
    break;

    case 6:
    printf("Enter the amount of Pound(s):\n");
    scanf("%d", &BRTP);
    USD=BRTP/1.39;
    printf("USD=%.2f",USD);
    break;

    default :
        printf("Invalid Choice!");
        break;
   }
}
