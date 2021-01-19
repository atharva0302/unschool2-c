#include<stdio.h>
int main()
{
    int num1,num2, max=0;
    printf("enter the two value num1,num2");
    scanf("%d,%d",&num1,&num2);
    max = (num1>num2)? num1:num2 ;
        printf("max:%d",max);
        return 0;
}
