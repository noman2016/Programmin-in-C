// H A A NOMAN
#include<stdio.h>
main()
{
    float Fahrenheit, Celsius;
    printf("Fahrenheit to Celsius\n");
    printf("\nValue in Fahrenheit : ");
    scanf("%f",&Fahrenheit);
    Celsius=5.0/9.0*(Fahrenheit-32);
    printf("\nValue in Celsius : %f\n",Celsius);
    printf("\n\n**************************\n\n");
    printf("Celsius to Fahrenheit\n");
    printf("\nValue in Celsius : ");
    scanf("%f",&Celsius);
    Fahrenheit=32+(Celsius*9/5);
    printf("\nValue in Fahrenheit : %f\n",Fahrenheit);
}
