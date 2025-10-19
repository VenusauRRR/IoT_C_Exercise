#include <stdio.h>
#include <math.h>

int main(){
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompound = 0;
    double total = 0.0;

    printf("Compound Interest Calculator");
    printf("Enter the principal (P): ");
    scanf("%lf", &principal);
    printf("Enter the interest rate %% (r):");
    scanf("%lf", &rate);
    printf("Enter the # of years (t): ");
    scanf("%d", &years);
    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompound);

    total = principal * pow((1 + rate / timesCompound / 100), timesCompound * years);

    printf("After 2 years, the total will be %.2lf", total);

    return 0;
}