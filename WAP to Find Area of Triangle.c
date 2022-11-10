//WAP to Find Area of Triangle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two Base of a Triangle\n");
    scanf("%d",&a);
    printf("Enter two Height of a Triangle\n");
    scanf("%d",&b);
    c=(a*b)/2;
    printf("Area of Triangle = %d",c);
    return 0;
}