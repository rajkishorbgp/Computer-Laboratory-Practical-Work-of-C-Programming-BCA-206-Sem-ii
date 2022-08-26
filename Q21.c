/*                                          Program:21
     Write a C Program to accept 'n' names from user, store them into 2-D array and search whether
     a given name is present in array or not.
                                                                                       */
#include <stdio.h>
#include <string.h>
int main()
{
     int t, i, r = 0;
     printf("How many names would you like to enter ?\n");
     scanf("%d", &t);
     fflush(stdin);
     printf("Enter %d names: \n", t);
     char name[t][30], str[30];
     for (i = 0; i < t; i++)
     {
          strupr(gets(name[i]));
     }
     printf("Enter the name you want to search: ");
     strupr(gets(str));
     for (i = 0; i < t; i++)
     {
          if (strcmp(name[i], str) == 0)
          {
               r = 1;
          }
     }
     if (r == 1)
          printf("%s is present in array", str);
     else
          printf("%s is not present in array", str);

     return 0;
}