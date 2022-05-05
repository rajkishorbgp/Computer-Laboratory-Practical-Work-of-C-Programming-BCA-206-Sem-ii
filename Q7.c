/*                                  Program:- 7
            C program to read two matrices of size 3*3 and find their product. 
                                                                                      */
#include<stdio.h>
void main()
{
	int matrix_1[3][3],matrix_2[3][3],product[3][3],sum;
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
	printf("\n____product of matrix____\n");
        for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <3; j++)
		{
		        sum=0;
			for (int k = 0; k < 3; k++)
			{
			    sum+=matrix_1[i][k]*matrix_2[k][j];
			}
			product[i][j]=sum;
			printf("%d\t",product[i][j]);
		}printf("\n");
	}
}
