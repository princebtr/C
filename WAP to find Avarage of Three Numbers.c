//WAP to find Avarage of Three Numbers
#include<stdio.h>
int main()
{
    int a,b,c,avg;
    printf("Enter the Numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Avarage of three numbers is%d",avg);
    return 0;
}