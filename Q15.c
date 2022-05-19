/*                 program: 15
      C program to read a string and check if it is palindrome.
                                                                           */
																		  
#include<stdio.h>
#include<string.h>
void main()
{
	char string[100],recpy[100];
	int com;
	printf("Enter String: ");
	gets(string);
	strcpy(recpy,string);
	strrev(string);
    com =strcmp(string,recpy);
	if (com==0)
	{
		printf("it is palindrome.");
	}
	else
	{
		printf("it is not palindrome.");
	}
}