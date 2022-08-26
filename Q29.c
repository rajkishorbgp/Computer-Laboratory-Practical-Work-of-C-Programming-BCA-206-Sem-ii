/*                            Program: 29
        Write a C program to copy the contents of one file into another file.
                                                                               */
#include <stdio.h>
void main()
{
    FILE *fp1 = NULL, *fp2 = NULL;
    char ch;
    fp1 = fopen("rajkishor.txt", "r");
    if (fp1 == NULL)
    {
        printf("rajkishor.txt file is not open");
        exit(1);
    }
    fp2 = fopen("raj.txt", "w");
    if (fp2 == NULL)
    {
        printf("raj.txt file is not open");
        exit(1);
    }
    while ((ch = getc(fp1)) != EOF)
        fputc(ch, fp2);
    printf("file successfully copied");
    fclose(fp1);
    fclose(fp2);
}