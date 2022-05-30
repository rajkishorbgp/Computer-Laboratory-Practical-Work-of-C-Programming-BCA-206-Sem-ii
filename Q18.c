/*                                    Program:18
        Write a C program to accept 5 names and store them into an array. Sort the elements in 
        alphabetical order. 

                                                                                */
#include<stdio.h>
#include<string.h>
void main()
{
        char name[5][30],t[30];
        int i,j;
        printf("Enter the 5 names : ");
         for (i =0; i<5; i++)
        {
                gets(name[i]);
        }
        printf("\t_____Given names_____\n");
        for ( i = 0; i <5; i++)
        {
                puts(name[i]);
        }
        for ( i = 0; i <5; i++)
        {
              for ( j = 0; j <5-i-1; j++)
              {
                  if (strcmp(name[j],name[j+1])>0)
                  {
                        strcpy(t,name[j]);
                        strcpy(name[j],name[j+1]);
                        strcpy(name[j+1],t);
                  }
              }
        }
        printf("\t______Sorted names______\n");
        for ( i = 0; i <5; i++)
        {
              puts(name[i]);
        }
}