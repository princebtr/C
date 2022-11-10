//Calculator for two number
#include<stdio.h>
int main()
{
    int z;
    float a,b,c;
    printf("PRESS 1 TO ADD\nPRESS 2 TO SUBTRACT\nPRESS 3 TO DIVIDE\nPRESS 4 TO MULTIPLY\nPress Any Key\n");
    scanf("%d",&z);
    if (z==1)
    {
        printf("Write two Numbers to ADD\n");
        scanf("%f%f",&a,&b);
        c=a+b;
        printf("Sum = %f",c);
    }
    if (z==2)
    {
        printf("Write two Numbers to SUBTRACT\n");
        scanf("%f%f",&a,&b);
        c=a-b;
        printf("Sum = %f",c);
    }
    if (z==3)
    {
        printf("Write two Numbers to DIVIDE\n");
        scanf("%f%f",&a,&b);
        c=a/b;
        printf("Sum = %f",c);
    }
    if (z==4)
    {
        printf("Write two Numbers to MULTIPLY\n");
        scanf("%f%f",&a,&b);
        c=a*b;
        printf("Sum = %f",c);
    }
    else
    {
        printf("IVALID INPUT TRY AGAIN");
    }
    return 0;
}