/*                       Program: PUT Exam2021-22(Even semester)Q10
    Write a c program to find concatenate of two string using pointers without library function.
                                       By: Raj kishor.   */
#include <stdio.h>
int main()
{
    char str[50], anstr[20];
    char *ptr, *anptr;
    ptr = str;
    anptr = anstr;
    printf("Enter the first string: ");
    gets(str);
    printf("Enter the second string: ");
    gets(anstr);

    while (*ptr != '\0')
    {
        *ptr++;
    }
    while ((*ptr = *anptr) != '\0')
    {
        *ptr++;
        *anptr++;
    }
    printf("concatenate of two string: %s", str);

    return 0;
}