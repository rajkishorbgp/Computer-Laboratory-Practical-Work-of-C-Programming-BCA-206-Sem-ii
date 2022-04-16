/*                              Program:- 8
     C program to read matrix of size 3*3 and display transpose of matrix
                                                                          */
#include<stdio.h>
void main()
{
	int matrix[3][3],i,j;
	printf("Enter the matrix :\n");
	for ( i = 0; i <3; i++)
	{
		for ( j = 0; j <3; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n_____transpose of matrix_______\n");
	for ( i = 0; i <3; i++)
	{
		for ( j = 0; j <3; j++)
		{
         printf("%d\t",matrix[j][i]); // transpose of matrix 			
		}printf("\n");
	}
}