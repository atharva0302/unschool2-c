#include<stdio.h>
int main()
{
    int total=0,sumodd=0,sumeven=0,i=0;
    printf("enter the total no");
    scanf("%d",&total );
    for(i=0;i<=total;i++)
    {
     if(i%2==0)
     {
         printf("\nsumeven");
         sumeven=sumeven +i;
     }
     else
     {
         printf("\nsumodd");
         sumodd=sumodd+i;
     }
     printf("\nsumodd:,%d",sumodd);
     printf("\nsumeven:,%d",sumeven);
    }
    return 0;
}

