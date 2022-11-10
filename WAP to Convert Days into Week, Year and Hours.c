//WAP to Convert Days into Week, Year and Hours
#include<stdio.h>
int main()
{
    float d,w,y,h;
    printf("ENTER NUMBER OF DAYS\n");
    scanf("%f",&d);
    w=d/7;
    y=d/365;
    h=d*24;
    printf("\nWEEK = %f",w);
    printf("\nYEAR = %f",y);
    printf("\nHOURS = %f",h);
    return 0;
}