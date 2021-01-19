#include <stdio.h>
int main()
{
    int num=0,i=0,sum=0;
    for(i=0;num!=0;i++)
    {
        printf("enter the no");
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("\nsum of all above n0: %d",sum);
    return 0;
}
