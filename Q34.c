/*                     Program: 34
     Write a c program for finding the largest integer among three integers using command line arguments.
                                                                                                                  */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
     int i, max = 0;
     for (i = 1; i < argc; i++)
     {
          if (atoi(argv[i]) > max)
          {
               max = atoi(argv[i]);
          }
     }
     printf("Largest number: %d", max);
     return 0;
}