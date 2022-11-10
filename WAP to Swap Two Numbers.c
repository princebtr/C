//WAP to Swap Two Numbers  
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Numbers A and B\n");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("Value of A and B after swapping is\n%d\n%d",a,b);
}
