/*                                  Program: 13
         Write a c program to add two numbers using the concept of function pointer.
			                                                                                */
#include<stdio.h>
float add (float,float);
void main()
{
	float sum,a,b;
	printf("Enter the two number: ");
	scanf("%f%f",&a,&b);
    float (*ptr)(float,float);
    ptr=add;
	sum=(ptr)(a,b);
	printf("Add two number: %f",sum);
}
float add(float x,float y){
	return (x+y);
}