//WAP to Convert Fahrenheit into Calsius
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Temprature in Fahrenheit\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\nTemprature in Calsius = %f`",c);
    return 0;
}