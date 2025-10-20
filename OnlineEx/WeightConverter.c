#include <stdio.h>

int main(){
    int choice = 0;
    double weight_kg = 0.0;
    double weight_lb = 0.0;
    const double kg_lb = 2.20462;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%lf", &weight_kg);
        weight_lb = weight_kg * kg_lb;
        printf("%.2lf kilograms is equal to %.2lf pounds", weight_kg, weight_lb);
    } else if (choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%lf", &weight_lb);
        weight_kg = weight_lb / kg_lb;
        printf("%.2lf pounds is equal to %.2lf kilograms", weight_lb, weight_kg);
    } else {
        printf("Invalid input");
    }
    

    return 0;
}