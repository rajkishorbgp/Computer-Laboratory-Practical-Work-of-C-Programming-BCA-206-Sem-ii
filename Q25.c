/*                                 Program: 25
    Write a 'C' Program to create a structure of student having fields roll_no,
    stud_name, mark1, mark2, mark3. Calculate total marks and average marks.
    Arrange the records in descending order of marks.
                                                                         */
#include <stdio.h>
#include <string.h>
struct student
{
    int rollNo;
    char studName[30];
    int mark[3];
} st;

int main()
{
    int i, t, j, sum = 0;
    printf("Enter the student roll no : ");
    scanf("%d", &st.rollNo);
    fflush(stdin);
    printf("Enter the student name : ");
    gets(st.studName);
    for (i = 0; i < 3; i++)
    {
        printf("Enter mark%d : ", i + 1);
        scanf("%d", &st.mark[i]);
        sum = sum + st.mark[i];
    }
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3 - j; i++)
        {
            if (st.mark[i] < st.mark[i + 1])
            {
                t = st.mark[i];
                st.mark[i] = st.mark[i + 1];
                st.mark[i + 1] = t;
            }
        }
    }
    printf("\nName : %s\n", st.studName);
    printf("Roll no : %d\n", st.rollNo);
    printf("\naverage marks : %d\n", sum / 3);
    printf("\n\t_____descending order of marks_____\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", st.mark[i]);
    }
    return 0;
}