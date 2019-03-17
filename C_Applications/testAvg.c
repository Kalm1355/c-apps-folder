#include <stdio.h>
#include <stdlib.h>

int main(){

    int grade1, grade2, grade3, grade4, grade5;
    //Gets 5 different grades
    printf("Score #1: \n");
    scanf(" %d", &grade1);

    printf("Score #2: \n");
    scanf(" %d", &grade2);

    printf("Score #3: \n");
    scanf(" %d", &grade3);

    printf("Score #4: \n");
    scanf(" %d", &grade4);

    printf("Score #5: \n");
    scanf(" %d", &grade5);
    //Takes those grades and gets the average of the five
    printf("Average: %d \n", (grade1 + grade2 + grade3 + grade4 + grade5) / 5);

    return 0;
}
