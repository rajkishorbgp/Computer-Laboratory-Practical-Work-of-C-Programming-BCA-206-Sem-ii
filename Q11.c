/*                                 Program:- 11
	  Write a C program to take the input into an array and reverse the element of the array (Dynamic array).
																						   */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *array, n;
	printf("Enter the size of the array you want to create : ");
	scanf("%d", &n);
	array = (int *)malloc(n * sizeof(int));
	printf("Enter the element: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("_____Reverse the element of Array____\n");
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
}