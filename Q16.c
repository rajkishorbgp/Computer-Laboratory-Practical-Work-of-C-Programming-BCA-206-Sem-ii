/*                        Program: 16
         Write a C program to reverse a string using recursive function.
		                                                                      */
#include<stdio.h>
void rev(char [],int ,int );
void main()
{
	char ch,name[20];
  printf("Enter string: ");
  gets(name);
  int count=0;
  while (name[count]!='\0')
    {
       count++;
    }
  rev(name,0,count-1);
  puts(name);
}

void rev(char arr[],int i, int l){
  char ch;
  if(i>=l){
    return;
  }
  ch=arr[i];
  arr[i]=arr[l];
  arr[l]=ch;
  rev(arr,++i,--l);
}