/*                                    Program: 33
    Write a c program to store record of student (stud_no, stud_name, stud_addr, stud_Percentage)
    in a file using structure.
                                                                                           */
#include <stdio.h>
struct student
{
    long long int no;
    char name[20];
    char addr[50];
    float percentage;
} st;

void main()
{
    FILE *fptr;
    char fname[20];
    printf("Enter student no: ");
    scanf("%lld", &st.no);
    fflush(stdin);
    printf("Enter student name: ");
    gets(st.name);
    printf("Enter student addr: ");
    gets(st.addr);
    printf("Enter student Percentage: ");
    scanf("%f", &st.percentage);
    fflush(stdin);

    printf("\nEnter the file name: ");
    gets(fname);
    fptr = fopen(fname, "w");
    if (fptr != NULL)
        printf("\n\t< %s > file is successfully open\n", fname);

    fwrite(&st, sizeof(struct student), 1, fptr);
    printf("\n\t%s Detail successfully added.", st.name);
    fclose(fptr);
}