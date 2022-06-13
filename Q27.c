/*                         program: 27
        Write a c program to demonstrate the use of union.
                                                                                   */

#include <stdio.h>
union employee
{
        long int eno;
        char name[30];
        int salary;
} em;
int main()
{
        printf("\nEnter Employee name: ");
        gets(em.name);
        printf("Name: %s\n", em.name);
        printf("\nEnter Employee ID no: ");
        scanf("%ld", &em.eno);
        printf("ID no: %ld\n", em.eno);
        printf("\nEnter Employee salary: ");
        scanf("%d", &em.salary);
        printf("salary: %d", em.salary);

        return 0;
}