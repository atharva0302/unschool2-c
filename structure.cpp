#include <stdio.h>
#include<string.h>
struct student
{
    char name[20];
    char mail[20];
    char rollno[20];
    float mark[5];
};
int main()
{
    int i=0;
    struct student s1;
    printf("enter the name of student\n:");
    gets(s1.name);
     printf("enter the mail of student\n:");
     gets(s1.mail);
      printf("enter the roll n0of student\n:");
      gets(s1.rollno);
      for(i=0;i<5;i++)
      {
          printf("\nenter the mark of subject: %d",i+1);
          scanf("%f",&s1.mark);
      }
      printf("\nname:%s",&s1.name);
      printf("\nmail:%s",&s1.mail);
      printf("\nroll no:%s",&s1.rollno);
      for(i=0;i<5;i++)
      {
          printf("enter the mark \n%d,%f",i+1,&s1.mark[i]);
      }
      return 0;
}


