//WAP to find the perimeter and Area of Rectangle
#include<stdio.h>
int main()
{
    int l,b,p,a;
    printf("Enter Length of Rectangle\n");
    scanf("%d",&l);
    printf("Enter Breadth of Rectangle\n");
    scanf("%d",&b);
    p=2*(l+b);
    a=l*b;
    printf("Perimeter of Rectangle=%d",p);
    printf("\nArea of Rectangle=%d",a);
    return 0;
}