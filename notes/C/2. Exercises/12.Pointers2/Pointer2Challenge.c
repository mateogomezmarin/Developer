/*
Given:

int numbers[4] = {10, 20, 30, 40};
int *p = numbers;
Print the first element using *p.
Print the third element using pointer arithmetic.
Change the second element to 99 using p.
Print all elements using a pointer loop.

*/

#include <stdio.h>

int main(){

    int numbers[4] = {10, 20, 30, 40};
    int *p = numbers;

    printf("%d\n",*numbers);
    printf("%d\n",*(numbers + 2));
    *(p + 1) = 99;

    int i;
    for(i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
        printf("%d\n", *(p + i));
    }
}