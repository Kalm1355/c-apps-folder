#include <stdio.h>
#include <stdlib.h>

int calculateBonus(int yearsWorked);

int main(){

    int myBonus = calculateBonus(14);
    int jdBonus = calculateBonus(3);

    printf("I worked 14 years so I get $%d \n", myBonus);
    printf("John Doe worked 3 years so he gets $%d \n", jdBonus);

    return 0;
}

int calculateBonus(int yearsWorked){
    int bonus = yearsWorked * 250;

    if(yearsWorked > 10){

        bonus += 1000;

    }

    return bonus;
}
