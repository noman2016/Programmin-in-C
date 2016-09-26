// H A A NOMAN
//multiplication Table For array
#include<stdio.h>
#define row 10
#define col 10
main()
{
    int r,c;
    int mul[row][col];
    printf("\t~~~~~~~~~~~~~~~~~~~~\n");
    printf("\tMULTIPLICATION TABLE\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~\n\n");
    int i,j;
       printf("No: ");
    for(j=1;j<=col;j++)
    {
        printf("%4d",j);
    }

    printf("\n---------------------------------------------\n");
    for(i=0;i<row;i++)
    {
        r=i+1;
        printf("%2d |",r);
        for(j=1;j<=col;j++)
        {
            c=j;
            mul[i][j]=r*c;
            printf("%4d",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
