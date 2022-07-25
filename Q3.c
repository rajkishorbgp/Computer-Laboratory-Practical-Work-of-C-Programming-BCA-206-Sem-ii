/*                                Program:- 3
	 Write a 'C' Program to accept 'n' numbers from user, store these numbers into an array.
	 Find out Largest and Smallest number from an array.
																							  */
#include <stdio.h>
void main()
{
	int n, i, max, j, min;
	printf("What number do you want to enter: ");
	scanf("%d", &n);
	int num[n];
	printf("Enter the %d integer number\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	max = num[0];
	min = num[0];
	for (j = 0; j < n; j++)
	{
		if (max < num[j])
		{
			max = num[j];
		}
		if (min > num[j])
		{
			min = num[j];
		}
	}
	printf("max= %d\nmin= %d", max, min);
}