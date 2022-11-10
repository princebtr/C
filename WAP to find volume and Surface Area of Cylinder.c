//WAP to find volume and Surface Area of Cylinder
#include<stdio.h>
int main()
{
    float r,h,pi,volume,sa;
    printf("Radius of Cylinder\n");
    scanf("%f",&r);
    printf("Height of Cylinder\n");
    scanf("%f",&h);
    pi=3.14;
    volume=pi*r*r*h;
    sa=2*pi*r*(r+h);
    printf("Volume of Cylinder=%f",volume);
    printf("\nSurface Area of Cylinder=%f",sa);
    return 0;
}