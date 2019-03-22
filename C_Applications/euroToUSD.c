#include <stdio.h>
#include <stdlib.h>

void convertToDollars(float euro);

int main(){

    float euroPrice1 = 1.00;

    convertToDollars(euroPrice1);

    return 0;
}

void convertToDollars(float euro){

        float usd = euro * 1.37;
        printf("%.2f euros = %.2f USD\n", euro, usd);

    return;
}
