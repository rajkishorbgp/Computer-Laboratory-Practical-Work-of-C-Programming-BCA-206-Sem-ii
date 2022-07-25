/*                             Program:- 9
		Write a 'C' program to swap the values of two variables by using call by reference.
																		   */
#include <stdio.h>
void swap(int *, int *);
void main()
{
	int a, b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("_____Before swaping values_____\n\tA= %d\tB= %d", a, b);
	swap(&a, &b);
	printf("\n_____After swaping values_____\n\tA= %d\tB= %d", a, b);
}
void swap(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}