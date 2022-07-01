/*                             Program: 30
    Write a C program to do the following:

        (a) Create a text file 'input.txt'
        (b) Print the contents of file in reverse order
                                                                             */
#include <stdio.h>
#include <string.h>
int main()
{
      FILE *fp;
      char ch, fileName[20], str[100], rev[100];
      int i = 0;
      printf("Enter the file name you want to create : ");
      gets(fileName);
      fp = fopen(fileName, "w+");
      if (fp != NULL)
      {
            printf("\n\t'%s' file successfully create....\n", fileName);
      }
      printf("\nEnter file contents: ");
      gets(str);
      fputs(str, fp);
      rewind(fp);
      while ((ch = fgetc(fp)) != EOF)
      {
            rev[i] = ch;
            i++;
      }
      rev[i] = '\0';
      printf("\n\tcontents of file in reverse order\n\n");
      strrev(rev);
      puts(rev);
      fclose(fp);
      return 0;
}