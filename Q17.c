/*                                 Program:17
   Write a menu driven program which performs following operations on strings. Write separate
     function for each option,
         - Check String is Substring of Another String
         - Count Occurrences of Character
         - Exit.
                                                                              */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int substring(char[], char[]);
int occurrences(char[], char);
void main()
{
  int ch;
  do
  {
    printf("\n\t1. Check String is Substring of Another String.\n");
    printf("\t2. Count Occurrences of Character.\n");
    printf("\t3. Exit.\n");
    printf("\nEnter the choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
      char str[50], anstr[30];//Rajkishor
      fflush(stdin);
      printf("Enter String: ");
      gets(str);
      printf("Enter Another String: ");
      gets(anstr);
      int n = substring(str, anstr);
      if (n == -1)
      {
        printf("String is not Substring");
      }
      else
      {
        printf("String is Substring");
      }
    }
    break;
    case 2:
    {
      char str[50], chr;
      fflush(stdin);
      int occ;
      printf("Enter String: ");
      gets(str);
      printf("Enter the Character: ");
      scanf("%c", &chr);
      occ = occurrences(str, chr);
      if (occ == 0)
      {
        printf("%c is not find ");
      }
      else
      {
        printf("Occurrences of Character : %d\n", occ);
      }
    }
    break;
    case 3:
    {
      exit(0);
    }
    default:
      printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
      break;
    }
  } while (1);
}

int substring(char str[50], char anstr[30])
{
  int i, j, k, l;
  l = strlen(anstr);
  for (i = 0; str[ i+ l - 1]; i++)
  {
  printf("anstrlenth %d =%c\n",i,str[(i+l-1)]);
    k = i;
    for (j = 0; j < l; j++)
    {
      if (str[k] != anstr[j])
      {
        break;
      }
      k++;
    }
    if (j == l)
    {
      return i;
    }
  }
  return -1;
}

int occurrences(char str[50], char c)
{
  int i, count = 0;
  for (i = 0; str[i]; i++) 
  {
    if (str[i] == c)
    {
      count++;
    }
  }
  return count;
}
