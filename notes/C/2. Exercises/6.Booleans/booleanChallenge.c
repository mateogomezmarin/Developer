/*Simple C bool Exercise

Create a program that represents whether you have completed three tasks:

exerciseDone
homeworkDone
readingDone

Set each variable to either true or false.

Then create boolean variables that determine:

Whether all three tasks are completed.
Whether at least one task is completed.
Whether the exercise is not completed.

Finally, print the results.*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool exerciseDone = false;
    bool homeworkDone = true;
    bool readingDone = false;

    bool allDone = exerciseDone && homeworkDone && readingDone;
    bool leastOne = exerciseDone || homeworkDone || readingDone;
    bool exerciseNotDone = !exerciseDone;

    printf("Exercise done:     %d\n", exerciseDone);
    printf("Homework done:     %d\n", homeworkDone);
    printf("Reading done:      %d\n", readingDone);
    printf("All done:          %d\n", allDone);
    printf("At least one done: %d\n", leastOne);
    printf("Exercise not done: %d\n", exerciseNotDone);

    return 0;
}
