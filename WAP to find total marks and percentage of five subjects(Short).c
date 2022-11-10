//WAP to find total marks and percentage of five subjects(Short)
#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,per;
    printf("Marks obtained in English Hindi Maths Science SSt\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("Total Marks in Five Subjects=%d",total);
    per=total*100/500;
    printf("\nPercentage=%d%%",per);
    return 0;
}