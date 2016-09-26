// H A A NOMAN
#include<stdio.h>
main()
//while loop
{
        int n,i=1;
        printf("Enter Your Multiplication Table Number : ");
        scanf("%d",&n);
        while (i<=10)
        {
                printf("\n%d * %d = %d\n",n,i,n*i);
                i++;
        }
        return 0;
}

//for loop

/*{
        int n,i;
        printf("Enter Your Multiplication Table Number : ");
        scanf("%d",&n);
        for (i=1;i<=20;i++)
        {
                printf("\n%d * %d = %d\n",n,i,n*i);
        }
        return 0;
}*/
