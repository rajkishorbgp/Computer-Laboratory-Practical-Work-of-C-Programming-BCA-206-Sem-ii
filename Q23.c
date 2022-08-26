/*                           Program: 23
Write a C program to accept details of 'n' employee(eno, ename, salary) and
display the details of employee having highest salary. Use array of structure.
                                                                           */
#include <stdio.h>
struct employee
{
    long int eno;
    char name[30];
    int salary;
};
int main()
{
    int t, i, max, no = 0;
    printf("How many employees do you want to enter details ?\n");
    scanf("%d", &t);
    struct employee e[t];
    for (i = 0; i < t; i++)
    {
        printf("\n\t_____Enter details of employee_%d(eno,ename,salary)_______\n\n", i + 1);
        printf("Enter em%d eno: ", i + 1);
        scanf("%ld", &e[i].eno);
        fflush(stdin);
        printf("Enter em%d ename: ", i + 1);
        gets(e[i].name);
        printf("Enter em%d salary: ", i + 1);
        scanf("%d", &e[i].salary);
    }
    max = e[0].salary;
    for (i = 0; i < t; i++)
    {
        if (e[i].salary > max)
        {
            max = e[i].salary;
            no = i;
        }
    }

    printf("\n\temployee %d of highest salary\n\n", no + 1);
    printf("eno: %ld\n", e[no].eno);
    printf("ename: %s\n", e[no].name);
    printf("salary: %d\n", e[no].salary);

    return 0;
}