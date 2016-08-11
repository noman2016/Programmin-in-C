// H A A NOMAN
#include<stdio.h>
#include<conio.h>

main()
{
    Double commision,price,net_price,percentage_commision;

    printf("Please Enter Your Commision = ");
    scanf("%f",&commision);
    percentage_commision=100-commision;
    /*printf("\nYour percentage commision is = %f",percentage_commision);*/
    printf("\n\nPlease Enter Your Price = ");
    scanf("%f",&price);
    net_price=percentage_commision*price/100;
    printf("\n\nYour Net Price is = %.3f",net_price);
    printf("\n\n");

getch(); /* Created by Hafez Abdullah Al Noman*/
}

