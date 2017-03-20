#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    struct empinfo
    {
    int emp_id;
    char nm[100];
    char sex;
    int salary;
    };

    int i;
    struct empinfo data[3]={{1001,"Ashish",'m',10000},{1002,"Shwati",'f',8000},{1003,"Praveen",'m',15000}};

    printf("The content record of employee are as follows:\n\n");
    for(i=0; i<3; i++)
    {
        printf("Record No: %d  ", i+1);
        printf("Employee ID : %d  ", data[i].emp_id);
        printf("Employee name: %s  ", data[i].nm);
        printf("Employee Gender: %c  ", data[i].sex);
        printf("Employee salary: %d  ", data[i].salary);
        printf("\n\n");
    }
    return 0;

}
