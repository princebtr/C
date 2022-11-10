//WAP to find Total marks nad Percentage of Five Subjects (LONG)
#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,per;
    printf("Marks in English\n");
    scanf("%d",&a);
    printf("Marks in Hindi\n");
    scanf("%d",&b);
    printf("Marks in Maths\n");
    scanf("%d",&c);
    printf("Marks in Science\n");
    scanf("%d",&d);
    printf("Marks in Social Studies\n");
    scanf("%d",&e);
    total=a+b+c+d+e;
    printf("Total Marks out of 500=%d",total);
    per=total*100/500;
    printf("\nTotal Percentage=%d%%",per);
    return 0;
}