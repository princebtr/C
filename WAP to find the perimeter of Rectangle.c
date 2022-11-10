//WAP to find the perimeter of Rectangle
#include<stdio.h>
int main()
{
    int l,b,p;
    printf("Enter Length of Rectangle\n");
    scanf("%d",&l);
    printf("Enter Breadth of Rectangle\n");
    scanf("%d",&b);
    p=2*(l+b);
    printf("Perimeter of Rectangle=%d",p);
    return 0;
}