/*                                     Program:22
         Write C program to accept the details of employee and display them using structure. Details 
         consist of Employee ID, Name, Designation, Department, Salary.
                                                                                              */
#include<stdio.h>
struct employee
{
    long long int id;
    int salary;
    char name[30];
    char designation[20];
    char department[20];
};
void main()
{
    struct employee e;
    printf("Enter Employee ID, Name, Designation, Department, Salary.\n");
    scanf("%lld",&e.id);
    fflush(stdin);
    gets(e.name);
    gets(e.designation);
    gets(e.department);
    scanf("%d",&e.salary);   
    printf("\nEmployee ID : %lld\n",e.id);
    printf("Employee Name : %s\n",e.name);
    printf("Employee Designation : %s\n",e.designation);
    printf("Employee Department : %s\n",e.department);
    printf("Employee Salary : %d\n",e.salary);
}