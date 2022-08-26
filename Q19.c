/*                               Program:19
     Write a C program to accept a string & replace all occurrences of character 'a' with '*' symbol.
                                                                                          */
#include <stdio.h>
#include <string.h>
int main()
{
     char str[50], i;
     printf("Enter String: ");
     gets(str);
     for (i = 0; str[i]; i++)
     {
          if (str[i] == 'a')
          {
               str[i] = '*';
          }
     }
     printf("replace all occurrences of character 'a' with '*' symbol\n");
     puts(str);
     return 0;
}