/*                           Program: 26
     Write a c program to show the use of nested structure.
                                                                           */
#include <stdio.h>
struct student
{
     char name[30];
     long long int rollNo;
     struct mark
     {
          int Math;
          int cProgram;
          int ob;
          int deco;
          int fa;

     } mk[2];

} st[2];

void main()
{
     int i, sum[2] = {0, 0};
     for (i = 0; i < 2; i++)
     {
          printf("\n\tEnter the two student details...\n");
          printf("Enter %d. student name and roll no. \n", i + 1);
          gets(st[i].name);
          scanf("%lld", &st[i].rollNo);
          printf("Enter %d. subject mark(Math,C program,OB,DECO,FA\n", i + 1);
          scanf("%d%d%d%d%d", &st[i].mk[i].Math, &st[i].mk[i].cProgram,
                &st[i].mk[i].ob, &st[i].mk[i].deco, &st[i].mk[i].fa);
          fflush(stdin);
          sum[i] += st[i].mk[i].Math + st[i].mk[i].cProgram + st[i].mk[i].ob + st[i].mk[i].deco + st[i].mk[i].fa;
     }
     for (i = 0; i < 2; i++)
     {
          printf("\n\nName: %s", st[i].name);
          printf("\nRoll no: %lld", st[i].rollNo);
          printf("\naverage marks: %d", sum[i] / 5);
     }
}