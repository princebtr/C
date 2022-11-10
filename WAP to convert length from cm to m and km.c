//WAP to convert length from cm to m and km
#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("Enter Length in Centimeter\n");
    scanf("%f",&cm);
    m=cm/100;
    km=cm/10000;
    printf("\nLength in Meter%f",m);
    printf("\nLength in Kilo Meter%f",km);
    return 0;
}