/*                                           Program:-1
                C program to read an array of 10 integers and find sum of all numbers.
                                                                                             */
#include<stdio.h>
void main()
{
	int num[10],sum=0,i;
	printf("Enter the ten number:- ");
	for ( i = 0; i < 10; i++) {
	scanf("%d",&num[i]);
    sum+=num[i]; }
	printf("sum of all number= %d",sum);
}