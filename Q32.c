/*                               Program: 32
    Write a c program to count number of characters, words and lines in a text file.
                                                                                       */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fptr;
    char ch, fileName[20];
    int characters = 0, words = 0, lines = 0;
    printf("Enter source file path:  ");
    gets(fileName);
    fptr = fopen(fileName, "r");
    if (fptr == NULL)
    {
        printf("\n\t< %s > file is not open\n", fileName);
        exit(1);
    }
    else
        printf("\n\t< %s > file is successfully open\n", fileName);

    while ((ch = fgetc(fptr)) != EOF)
    {
        characters++;
        if (ch == ' ' || ch == '\n')
            words++;
        if (ch == '\n')
            lines++;
    }
    if (characters > 0)
    {
        words++;
        lines++;
    }

    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(fptr);
}