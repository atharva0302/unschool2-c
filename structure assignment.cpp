#include <stdio.h>
struct employee{
    char    name[5];
    int     empId[5];
    float   salary[5];
};

int main()
{

    struct employee emp;
        printf("\nEnter details :\n");
    printf("Name :");
     gets(emp.name);
    printf("ID :");
     scanf("%d",&emp.empId);
    printf("Salary :");
     scanf("%f",&emp.salary);

      printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
