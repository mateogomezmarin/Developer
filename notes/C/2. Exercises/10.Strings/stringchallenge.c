/*Exercise — String Manipulation

Write a C program that:

Creates a string:

char text[] = "Hello World";
Changes the first character to J using its index.
Prints:
The entire string using %s
The first character using %c
The length using strlen()

Creates a second string:

char extra[] = "!!!";

and uses strcat() to add it to text.

Creates a third string and uses strcpy() to copy text into it.
Uses strcmp() to check whether text and the copied string are equal.*/

#include <stdio.h>
#include <string.h>

int main() {
    char text[20] = "Hello World";

    text[0] = 'J';

    printf("Entire string: %s\nFirst character: %c\n",
           text, text[0]);

    char extra[] = "!!!";

    strcat(text, extra);

    printf("Final string: %s\n", text);
}