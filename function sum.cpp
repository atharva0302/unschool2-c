#include <stdio.h>
int add(int x,int y);
int add(int x,int y)
{
    int sum;
    sum=x+y;
    printf("\nsum%d and %d:%d",sum,x,y);
    return 0;

}
int main()
{
    add(2,55);
    add(5,65);
    add(10,60);
    return 0;

}
