/*                               Program:-4
   C program to read an array of 7 integer numbers and sort it in ascending order.
                                                                                      */
#include<stdio.h>
void main()
{
	int num[7],t;
	printf("Enter the any 7 integer number\n");
	for (int i = 0; i < 7; i++)
		scanf("%d",&num[i]);
	for (int i = 0; i<7; i++)
	{
	    for (int j = 0; j<7-i; j++)
		{
		   if (num[j]>num[j+1])
		    {
				t=num[j];
			   num[j]=num[j+1];
			   num[j+1]=t;
     		}
		}	
	}
    for (int i = 0; i<7; i++)
	{
		printf("%d ",num[i]);
	}
}