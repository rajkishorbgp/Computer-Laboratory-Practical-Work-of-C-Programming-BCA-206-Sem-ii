/*                                     Program:- 10
	 Write a C program to accept 5 numbers, store them in array and find out the smallest number
							  using pointer.
																							 */
#include <stdio.h>
#define n 5
void main()
{
	int array[n], *small, i;
	printf("Enter %d integer number: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	small = &array[0];
	for (i = 0; i < n; i++)
	{
		if (*small > array[i])
		{
			*small = array[i];
		}
	}
	printf("Smallert number : %d", *small);
}