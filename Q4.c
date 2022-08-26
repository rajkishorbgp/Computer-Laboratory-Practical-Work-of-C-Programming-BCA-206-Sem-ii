/*                               Program:-4
   write a C program to read an array of 7 integer numbers and sort it in ascending order.
																					  */
#include <stdio.h>
void main()
{
	int num[7], t, i, j;
	printf("Enter the any 7 integer number: ");
	for (int i = 0; i < 7; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7 - i-1; j++)
		{
			if (num[j] > num[j + 1])
			{
				t = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 7; i++)
	{
		printf("%d ", num[i]);
	}
}