/*                                  Program:- 7
            C program to read two matrices of size 3*3 and find their product. 
                                                                                      */
#include<stdio.h>
void main()
{
	int matrix_1[3][3],matrix_2[3][3];
	printf("Enter the first matrix:- ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
           scanf("%d",&matrix_1[i][j]);
		}
	}
	printf("Enter the second matrix:- ");
   	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
        scanf("%d",&matrix_2[i][j]);
		}
	}
	
}