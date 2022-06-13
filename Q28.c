/*                          Program: 28
     Write a c program to understand all the bitwise operators available in c.
                                                                             */
#include <stdio.h>
int main()
{

   unsigned int a = 60;
   unsigned int b = 13;

   int c = 0;
   c = a & b;

   printf("c=a&b; Value of c is %d\n", c);
   c = a | b;
   printf("c=a|b; Value of c is %d\n", c);
   c = a ^ b;
   printf("c=a^b; Value of c is %d\n", c);
   c = ~a;
   printf("c= ~a; Value of c is %d\n", c);
   c = a << 2;
   printf("c=a<<2; Value of c is %d\n", c);
   c = a >> 2;
   printf("c=a>>2; Value of c is %d\n", c);
}