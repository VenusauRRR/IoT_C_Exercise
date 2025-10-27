#include <stdio.h>

const float momsPercent = 0.25;

float calculatMoms(totalSum);

int main(void){
    float totalSum = 0;

    printf("Enter the total incl. moms: ");
    scanf("%f", &totalSum);
    printf("The total is %f and the moms is %f", totalSum, calculatMoms(totalSum));

    return 0;
}

float calculatMoms(totalSum){
    return totalSum * momsPercent;
}

