#include <stdio.h>

#define SIZE 5

/* Global variable */
int table[SIZE];

/* Function definition */
void fill_in(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        t[i] = i;
    }

    return;
}

/* Function definition */
void print_array(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Array[%i] = %i\n", i, t[i]);
    }
}