#include<stdio.h>
#include<conio.h>
main()
{
    int year;
    printf("Please Enter Your Year: ");
    scanf("%d",&year);
    if((year%400==0||year%4==0)&&year%100!=0)
        printf("%d is Leap year",year);
    else
        printf("%d is not Leap Year",year);
    return 0;
}
