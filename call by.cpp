#include <stdio.h>
int swapx(int*,int*);
int main()
{
    int a=20,b=30;
    swapx (&a,&b);
    printf("\na=%d,b=%d",a,b);
    return 0;
}
int swapx(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nx=%dy=%d",*x,*y);
    return 0;
}
