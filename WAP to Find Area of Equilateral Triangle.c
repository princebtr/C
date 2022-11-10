//WAP to Find Area of Equilateral Triangle
#include<stdio.h>
int main()
{
    float a,b,c;
    b=1.732;
    printf("Enter Side of a Triangle\n");
    scanf("%f",&a);
    c=(a*a)*b/4;
    printf("Area of Triangle = %f",c);
    return 0;
}