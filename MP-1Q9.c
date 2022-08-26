/*                                      Program: MP-1,Q9
                Write a C program to subtract two pointer veriables. 
                                                                                  */
#include<stdio.h>
int main()
{
    int a,b,s;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    s=*p1-*p2;
    printf("Subtract: a-b=%d",s);

    return 0;
}
