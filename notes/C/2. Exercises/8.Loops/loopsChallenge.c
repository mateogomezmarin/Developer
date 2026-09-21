/*
Write a C program that uses a for loop to print the numbers from 1 to 10.

Then, make it print only the even numbers from 1 to 10.

Expected output:

2
4
6
8
10
Bonus

Use continue so that odd numbers are skipped.
*/

#include <stdio.h>

int main(){
    int i;
    for(i=0;i<11;i++){
        if(i%2 == 0){
            printf("%d\n", i);
        }
            continue;
    }
}




