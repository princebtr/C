//WAP to find total marks and percentage and Avarage of five subjects(Short)
#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,per,avg;
    printf("Marks obtained in English Hindi Maths Science SSt\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("Total Marks in Five Subjects=%d\n",total);
    avg=total/5;
    printf("Avarage= %d",avg);
    per=total*100/500;
    printf("\nPercentage= %d%%",per);
    return 0;
}