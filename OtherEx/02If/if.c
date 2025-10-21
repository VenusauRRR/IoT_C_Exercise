#include <stdio.h>

int main(){
    // //if 1
    // int nr1 = 0.0;
    // printf("Please enter an integer: ");
    // scanf("%d", &nr1);
    // if (nr1 == 10){
    //     printf("The number is equal to 10\n");
    // } else if (nr1 > 10){
    //     printf("The numbe is bigger than 10\n");
    // } else {
    //     printf("The number is smaller than 10");
    // }

    // //if 2
    // int milkpack = 0;
    // printf("How many milk packages are left? ");
    // scanf("%d", &milkpack);
    // if (milkpack < 10){
    //     printf("Order 30 packs more\n");
    // } else if (milkpack >= 10 && milkpack <20){
    //     printf("Order 20 more packs\n");
    // } else {
    //     printf("You do not have to order any milk\n");
    // }

    //if 3
    float temperature = 0.0f;
    printf("Enter a temperature: ");
    scanf("%f", &temperature);
    if (temperature >= 37.8f && temperature < 39.8f){
        printf("You have fever\n");
    } else if (temperature >= 39.8f){
        printf("You should see a doctore\n");
    } else {
        printf("You dont have a feber\n");
    }

    return 0;
}