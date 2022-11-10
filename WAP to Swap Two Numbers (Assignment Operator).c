//WAP to Swap Two Numbers (Assignment Operator)
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Numbers A and B\n");
    scanf("%d%d",&a,&b);
    a-=b;
    b+=a;
    a-=b;
    a=(-a);
    printf("Value of A and B after swapping is\n%d\n%d",a,b);
}
