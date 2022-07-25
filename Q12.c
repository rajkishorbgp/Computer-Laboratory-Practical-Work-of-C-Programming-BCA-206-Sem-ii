/*                                       Program: 12
	 Write a 'C' program to accept 'n' numbers from user and sort them in ascending order using
							  Dynamic Memory Allocation.
																						  */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	int *n, i, j, t;
	printf("how many numbers do you want to sort : ");
	scanf("%d", &a);
	n = (int *)malloc(a * sizeof(int));
	printf("Enter the %d element :", a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &n[i]);
	}
	printf("_____Sorted lest_____\n");
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a - i; j++)
		{
			if (n[j] > n[j + 1])
			{
				t = n[j];
				n[j] = n[j + 1];
				n[j + 1] = t;
			}
		}
	}
	for (i = 0; i < a; i++)
	{
		printf("%d ", n[i]);
	}
}