#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5},location=-1,i=0;
    for(i=0;i<5;i++)
    {
        if(array[i]==3)
        {
            location=i+1;
            break;
        }
        if(location==-1)
            {
                printf("element is not found:");
            }
            else
            {
                printf("element is found:%d",location);
            }
            return 0;
        }

    }
