/*                                   Program:-2
	C program to read an array of 8 integer and find sum of all even and odd numbers.
																							*/
#include <stdio.h>
void main()
{
	int num[8], i, even = 0, odd = 0;
	printf("Enter eight integer number: ");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] % 2 == 0)
			even += num[i];
		else
			odd += num[i];
	}
	printf("sum of all even no= %d\nsum of all odd no= %d", even, odd);
}