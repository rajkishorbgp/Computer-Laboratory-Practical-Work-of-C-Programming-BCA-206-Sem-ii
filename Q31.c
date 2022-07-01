/*                               Program: 31
    Write a C program to append the contents of one file at the end of another file.
                                                                                  */
#include <stdio.h>
#include <stdlib.h>
void main()
{
  FILE *fp1, *fp2;
  char fnam1[20], fnam2[20], ch;
  printf("\nEnter the name of the file whose contents you want to copy: ");
  gets(fnam1);
  fp1 = fopen(fnam1, "r");
  if (fp1 == NULL)
  {
    printf("\n\t< %s > file is not open", fnam1);
    exit(1);
  }
  else
    printf("\n\t< %s > file is successfully open....\n", fnam1);

  printf("\nEnter the name of the file to which you want to copy the contents: ");
  gets(fnam2);
  fp2 = fopen(fnam2, "a");
  if (fp2 != NULL)
    printf("\n\t< %s > file is successfully open....\n", fnam2);

  while ((ch = fgetc(fp1)) != EOF)
  {
    fputc(ch, fp2);
  }
  printf("\nThe contents of one file have been successfully copied to the end of another.");

  fclose(fp1);
  fclose(fp2);
}