#include <stdio.h>
#include <stdlib.h>

int main(){

    int birthYear;
    int currentYear;

    printf("What's your birth year\n");
    scanf(" %d", &birthYear);

    printf("What's the current year?\n");
    scanf(" %d", &currentYear);

    int age = currentYear - birthYear;

    if(age >= 18){
        printf("You are an adult\n");
    }else{
        printf("You are still underage\n");
    }

    return 0;
}
