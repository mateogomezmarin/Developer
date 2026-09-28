```c
/*
Exercise

Try to predict what each program will do before running it.

Write a function greet() that prints "Hello!" and call it three times from main().
Create a global variable x = 5, then create a local variable with the same name inside a function. What value will be printed inside the function?
Use sqrt(), ceil(), and pow() to calculate and print a few mathematical results.
Create an inline function called multiply() that takes two integers and returns their product.
Write a recursive function that counts down from 5 to 1.

Challenge: For the recursion example, explain what causes the function to stop calling itself.
*/

#include <stdio.h>
#include <math.h>

// 1. Function
void greet() {
    printf("Hello!\n");
}

// 2. Global variable
int x = 5;

void retx() {
    int x = 4;  // Local x hides the global x
    //Local takes priority
    printf("%d\n", x);
}

// 3. Math functions
void mathExamples() {
    printf("Square root: %.2f\n", sqrt(16));
    printf("Ceiling: %.2f\n", ceil(1.4));
    printf("Floor: %.2f\n", floor(1.4));
    printf("Power: %.2f\n", pow(4, 3));
}

// 4. Inline function
inline int multiply(int a, int b) {
    return a * b;
}

// 5. Recursion
void countdown(int n) {
    if (n > 0) {
        printf("%d ", n);
        countdown(n - 1);
    }
}

int main() {

    // 1. Call greet() three times
    greet();
    greet();
    greet();

    // 2. Scope
    retx();

    // 3. Math functions
    mathExamples();

    // 4. Inline function
    printf("Multiplication: %d\n", multiply(4, 5));

    // 5. Recursion
    printf("Countdown: ");
    countdown(5);
    printf("\n");

    return 0;
}
```
