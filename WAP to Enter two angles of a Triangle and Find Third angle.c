//WAP to Enter two angles of a Triangle and Find Third angle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two Angles of a Triangle\n");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("Third Angle = %d",c);
    return 0;
}