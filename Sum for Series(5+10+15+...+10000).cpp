// H A A NOMAN
#include<stdio.h>
int main()
{
    int n,sum=0;
    for(n=5;n<=1000;n=n+20)
    {
        sum=sum+n;
        printf("\n Sum is: %d+%d",n,sum);
    }
    printf("\n\n Total Sum is : %d \n\n",sum);
}
