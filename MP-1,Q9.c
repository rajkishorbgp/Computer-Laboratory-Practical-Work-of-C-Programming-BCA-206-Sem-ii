/*                                      Program: MP-1,Q9
Explain pointer to pointer with to pointer with Explain. Can we subtract two pointer veriables. 
                                                                                                   */
#include<stdio.h>
void subtract(int *,int *);
int main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter the first no: ");
    scanf("%d",&a);
    printf("Enter the second no: ");
    scanf("%d",&b);
    printf("Subtract: a-b=%d",*p1-*p2);

    return 0;
}