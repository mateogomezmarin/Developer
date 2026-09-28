/*Write a C program that:

Asks the user for their age using scanf().
Asks for their full name using fgets().
Prints their age and name.
Creates a pointer agePtr that stores the address of age.
Prints:
The value of age
The address of age
The address stored in agePtr
The value of age using *agePtr
Expected output
Enter your age: 21
Enter your full name: John Doe

Name: John Doe
Age: 21
Age address: 0x7ffe...
Pointer address: 0x7ffe...
Age through pointer: 21*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int age;
    int* ptr = &age;

    printf("Write your age: \n");
    scanf("%d", &age);

    printf("Age: %d\n", age);
    printf("Age address: %p\n", (void*)&age);
    printf("Pointer address: %p\n", (void*)ptr);
    printf("Age through pointer: %d\n", *ptr);

    getchar();  // Remove the '\n' left by scanf()

    char fullName[30];
    char* addFullName = fullName;

    printf("Now write your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Full name: %s", fullName);
    printf("Full name address: %p\n", (void*)fullName);
    printf("Pointer address: %p\n", (void*)addFullName);

    return 0;
}

