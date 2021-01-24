#include <stdio.h>
int main()
{
    int number=0,result=0;
    printf("enter the no: \n");
    scanf("%d",&number);
    result=sum(number);
    printf("sum:%d",result);
    return 0;
}
int sum(int n)
{
    if(n!=1)
        return n+sum(n-1);
    else return n;
}
