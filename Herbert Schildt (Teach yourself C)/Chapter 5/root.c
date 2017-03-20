#include<stdio.h>
#include<math.h>

int main()
{
    int root[][3]={
        1,1,1,
        2,4,8,
        3,9,27,
        4,16,64,
        5,25,125,
        6,36,216,
        7,49,343,
        8,64,512,
        9,81,729,
        10,100,1000
        };

        int cube,i;

        printf("Enter the cube you want to look for.\n ");
        scanf("%d", &cube);

        for(i=0; i<10; i++)
        {
            if(cube==root[i][2])
            {
            printf("Root of the cube: %d\nSquare of the root: %d\n\n", root[i][0],root[i][1]);
            break;
            }
        }
        if(i==10)
            printf("The number is not listed.\n");

        main();

        return 0;
}
