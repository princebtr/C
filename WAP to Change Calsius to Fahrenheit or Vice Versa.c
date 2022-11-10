//WAP to Change Calsius to Fahrenheit or Vice Versa
#include<stdio.h>
int main()
{
    int a;
    float c,f;
    printf("\nPress 1 To change CALSIUS to FAHRENHEIT\nPress 2 To change FAHRENHEIT to CALSIUS\nENTER YOUR CHOICE\n");
    scanf("%d",&a);
    if (a==1)
    {
    printf("Enter Temprature in Celsius\n");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\nTemprature in Fahrenheit = %f`F",f);
    }
    else if (a==2)
    {
     printf("Enter Temprature in Fahrenheit\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\nTemprature in Calsius = %f`C",c);
    }
    else
    {
    printf("\nINVALID CHOICE");
    }
    return 0;
}