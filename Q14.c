/*                         Program: 14
	  C program to read string and count total number of digits in that string.
																				 */
#include <stdio.h>
#include <string.h>
void main()
{
	char name[100];
	printf("Enter string: ");
	gets(name);
	int digits = strlen(name);
	printf("%d", digits);
}