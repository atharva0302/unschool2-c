#include <stdio.h>
int swapx(int a,int b);
int main()
{
    int a=10,b=20;
    swapx(a, b);
    printf("\na=%d,b=%d",a,b);
    return 0;
}
int swapx(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swaping");
    printf("\nx=%d,y=%d",x,y);
    return 0;
}
