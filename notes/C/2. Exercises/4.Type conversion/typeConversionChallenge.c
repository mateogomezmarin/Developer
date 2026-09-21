// THIS IS AN EXERCISE TO TEST TYPE CONVERSION
/*
Requirements
Ask for:
4 integer exam scores
1 integer maximum score
Calculate:
Total score
Average score
Percentage
You must use explicit type conversion (float).
Print:
Total
Average with 2 decimals
Percentage with 2 decimals
Do not change the input variables from int.
Handle the case where maximum score = 0.
*/

#include <stdio.h>

int main(){

int score1 = 75;
int score2 = 70;
int score3 = 89;
int score4 = 64;
int maximumScore = 90;
int scoreCount = 4;

int totalScore = score1 + score2 + score3 + score4;

double percentageScore;

double averageScore = (double) totalScore / scoreCount;
if (maximumScore == 0){
    percentageScore = 0;
}
else{
    percentageScore = averageScore * 100/ maximumScore;
}

printf("Total score is: %d\n", totalScore);
printf("Average score is: %.2lf\n", averageScore);
printf("Percentage score is: %.2lf\n", percentageScore);

return 0
}