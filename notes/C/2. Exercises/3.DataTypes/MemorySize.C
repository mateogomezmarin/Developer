/*
Calculating the memory sizes of diferent data types.

*/

#include <stdio.h>

int main() {

    int year;
    float seconds;
    double miliseconds;
    char A;

    printf("int: %zu bytes\n"
           "float: %zu bytes\n"
           "double: %zu bytes\n"
           "char: %zu byte\n",
           sizeof(year),
           sizeof(seconds),
           sizeof(miliseconds),
           sizeof(A));

    return 0;
}