// WAP to find Diameter ,Area and Ciecumference of a Circle
#include<stdio.h>
int main()
{
    float pi,r,d,a,c;
    pi=3.14;
    printf("Enter the Radius\n");
    scanf("%f",&r);
    d=2*r;
    a=pi*r*r;
    c=2*pi*r;
    printf("\nDiameter of Circle=%f",d);
    printf("\nArea of Circle=%f",a);
    printf("\nCircumference of Circle=%f",c);
    return 0;
}