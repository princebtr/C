//WAP to Convert Celsius into Fahrenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Temprature in Celsius\n");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\nTemprature in Fahrenheit = %f`",f);
    return 0;
}