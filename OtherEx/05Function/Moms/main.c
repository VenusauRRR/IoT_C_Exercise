#include <stdio.h>

const float momsPercent = 0.25;

float calculatMoms(float totalSum);

int main(void){
    float totalSum = 0;

    printf("Enter the total incl. moms: ");
    scanf("%f", &totalSum);
    printf("The total is %.2f and the moms is %.2f", totalSum, calculatMoms(totalSum));

    return 0;
}

float calculatMoms(float totalSum){
    return totalSum * momsPercent;
}

