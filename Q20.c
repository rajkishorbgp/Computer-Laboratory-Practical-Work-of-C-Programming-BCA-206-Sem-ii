/*                                           program: 20
     Write a menu-driven program in C to perform the following operations on string using standard
     library functions.
         (i) Calculate Length of String
         (ii) Reverse a given String
         (iii) Concatenation of one string to another
         (iv) Copy one String into another
         (v) Compare two Strings
                                                                                         */
#include <stdio.h>
#include <string.h>
int main()
{
     int ch;
     char str[50];
     printf("\n\t1. Calculate Length of String.\n");
     printf("\t2. Reverse a given String.\n");
     printf("\t3. Concatenation of one string to another.\n");
     printf("\t4. Copy one String into another.\n");
     printf("\t5. Compare two Strings.\n");
     printf("\nEnter the choice: ");
     scanf("%d", &ch);
     fflush(stdin);
     switch (ch)
     {
     case 1:
     {
          printf("\n\t_______Calculate Length of String_______\n\n");
          printf("Enter String: ");
          gets(str);
          printf("Length of String: %d\n", strlen(str));
     }
     break;
     case 2:
     {
          printf("\n\t_______Reverse a given String______\n\n");
          printf("Enter String: ");
          gets(str);
          puts(strrev(str));
     }
     break;
     case 3:
     {
          char anstr[20];
          printf("\n\t______Concatenation of one string to another_____\n\n");
          printf("Enter first string: ");
          gets(str);
          printf("Enter second string: ");
          gets(anstr);
          strcat(str, anstr);
          puts(str);
     }
     break;
     case 4:
     {
          char anstr[50];
          printf("\n\t______Copy one String into another______\n\n");
          printf("Enter String: ");
          gets(str);
          strcpy(anstr, str);
          puts(anstr);
     }
     break;
     case 5:
     {
          int d;
          char anstr[50];
          printf("\n\t_______Compare two Strings._______\n\n");
          printf("Enter first String: ");
          gets(str);
          printf("Enter Second String: ");
          gets(anstr);
          d = strcmp(str, anstr);
          if (d == 0)
          {
               printf("string is equal\n");
          }
          else
          {
               printf("String is not equal\n");
          }
     }
     break;
     default:
          printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
          break;
     }
     return 0;
}