/*                            Program: MP-2,Q6
Write a program to swap two numbers using pointer with structure.
                                                            */
#include <stdio.h>
struct rajkishor
{
    int a;
    int b;
} rk;
int main()
{
    int t;
    struct rajkishor *ptr = &rk;
    printf("Enter the value of a and b : ");
    scanf("%d%d", &(*ptr).a, &(*ptr).b);

    printf("_____Before swaping values_____\n");
    printf("\ta= %d\tb= %d", (*ptr).a, (*ptr).b);
    // swap two number
    t = (*ptr).a;
    (*ptr).a = (*ptr).b;
    (*ptr).b = t;

    printf("\n_____After swaping values_____\n");
    printf("\ta= %d\tb= %d", (*ptr).a, (*ptr).b);

    return 0;
}
