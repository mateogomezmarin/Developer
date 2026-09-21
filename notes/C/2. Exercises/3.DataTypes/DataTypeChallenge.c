/*
Instructions:
Inside main(), complete the following steps:
Declare an int named studentID and assign it a value
Declare a float named score and assign it a value (with decimals)
Declare a char named grade and assign it a single letter (in single quotes)
Print all three values using printf (use the correct format specifiers).

Reference: https://www.w3schools.com/c/c_challenges_data_types.php
*/

#include <stdio.h> 

int main(){
    int studentID = 10929300;
    float score = 9.43;
    char grade = 'A';

    printf("%d,%.2f,%c\n", studentID, score, grade); //Format specifiers must be between ""

}