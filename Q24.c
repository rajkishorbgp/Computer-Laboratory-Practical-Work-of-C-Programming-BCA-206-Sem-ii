/*                                  Program: 24
     Write a menu driven program in 'C' which shows the working of library.
      The menu option should be

         (i) Add book details.
         (ii) Display book details.
         (iii) List all books of given author.
         (iv) List the count of books in the library.
         (v) Exit.
                                                                              */
#include <stdio.h>
#include <string.h>
int c = 0, i;
struct book
{
   char name[30];
   char author[30];
} book[500];

void addBook(char name[], char author[])
{
   int count = countBook();
   strcpy(book[count].name, name);
   strcpy(book[count].author, author);
   c++;
}

int countBook()
{
   return c;
}

void displayBook()
{
   for (i = 0; i < countBook(); i++)
   {
      printf("\t%d. book details", i + 1);
      printf("\nBook name : %s", book[i].name);
      printf("\nBook author : %s\n", book[i].author);
   }
}

void allBookGivenAuthor()
{
   for (i = 0; i < countBook(); i++)
      printf("\n%d. Book author : %s\n", i + 1, book[i].author);
}

int main()
{
   do
   {
      int ch;
      char name[30], author[30];
      printf("\n\t1. Add book details.\n");
      printf("\t2. Display book details.\n");
      printf("\t3. List all books of given author.\n");
      printf("\t4. List the count of books in the library.\n");
      printf("\t5. Exit.\n");
      printf("\nEnter the choice: ");
      scanf("%d", &ch);
      fflush(stdin);
      switch (ch)
      {
      case 1:
      {
         printf("\n\t______Add book details______\n");
         printf("Enter a new book name : ");
         gets(name);
         printf("Enter Book author name : ");
         gets(author);
         addBook(name, author);
      }
      break;
      case 2:
      {
         printf("\n\t_______Display book details______\n");
         displayBook();
      }
      break;
      case 3:
      {
         printf("\n\t______List all books of given author______\n");
         allBookGivenAuthor();
      }
      break;
      case 4:
      {
         printf("\n\t______List the count of books in the library______\n");
         printf("\n%d Book in the library\n", countBook());
      }
      break;
      case 5:
      {
         exit(0);
      }
      break;
      default:
      {
         printf("\n\t......invalid input..........\n");
         printf("\tPlease choose the correct option...\n");
      }
      break;
      }
   } while (1);
   return 0;
}