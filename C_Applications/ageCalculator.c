#include <stdio.h>
#include <stdlib.h>

int main(){

    int birthYear;
    int randomYear;
    int age;
    //Type in any birth year
    printf("Enter a birth year: \n");
    scanf(" %d", &birthYear);
    //Type in any other year
    printf("Enter another year: \n");
    scanf(" %d", &randomYear);
    //Calculates age depending on the birth year and the other year you typed
    age = randomYear - birthYear;
    age = abs(age);
    printf("In %d you would be %d years old \n", randomYear, age);


    return 0;
}
