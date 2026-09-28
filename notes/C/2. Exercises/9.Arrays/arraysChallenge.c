/*Write a C program that works with the scores of 5 students.

Create an integer array called scores containing:
72, 85, 91, 64, 78
Modify the score of the first student to 80 using its index.
Calculate the number of elements in the array using:
sizeof(scores) / sizeof(scores[0])
Use a for loop to print all the scores, one per line.
Calculate and print the average score.

Now create a 2D array called grades representing the scores of 2 students in 3 subjects:

{ {80, 75, 90},
  {65, 88, 72} }

Use nested loops to print every value in the matrix.*/

#include <stdio.h>

int main(){
    int scores[] = {72, 85, 91, 64, 78};
    scores[0] = 80;
    int size = sizeof(scores) / sizeof(scores[0]);

    int i,j,z;
    float sum = 0;
    for(i=0;i<size;i++){
        sum += scores[i];
        printf("%d ",scores[i]);
    }

    printf("\n Average score is: %.2f",sum/size);

    int grades[2][3] = { {80, 75, 90}, {65, 88, 72} };
    
    for(j=0;j<2;j++){
        printf("\n");
        for(z=0;z<3;z++){
            printf(" %d ",grades[j][z]);
        }
    }

    printf("\n"); //We print new line to remove % from the terminal
   
}