#include<stdio.h>
int main()
{
    float percentage=0.0;
    printf("enter the percentage");
    scanf("%f",&percentage);
    if(percentage>=80&&percentage<=100)
    {
        printf("you got o grade");
    }
    else if(percentage>=70&&percentage<80)
    {
        printf("you got a++ grade");
    }
    else if(percentage>=60&&percentage<70)
    {
        printf("you got a grade");
    }
    else if(percentage>=50&&percentage<60)
    {
        printf("you got b+grade");
    }
    else if(percentage<=45)
    {
        printf("you are fail");
    }

    else
    {
        printf("please enter the valid percentage ");
    }
    return 0;
}
