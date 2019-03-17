#include <stdio.h>
#include <stdlib.h>

int main(){

    int birthYear;
    int randomYear;
    int age;

    printf("Enter a birth year: \n");
    scanf(" %d", &birthYear);

    printf("Enter another year: \n");
    scanf(" %d", &randomYear);

    age = randomYear - birthYear;
    age = abs(age);
    printf("In %d you would be %d years old \n", randomYear, age);


    return 0;
}
