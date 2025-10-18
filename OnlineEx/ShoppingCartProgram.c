#include <stdio.h>
#include <string.h>

int main(){
    char itemName[20] = "";
    double price = 0.0f;
    int amount = 0;

    // printf("Item name: %s\n", itemName);
    // printf("Price: %lf\n", price);
    // printf("Amount: %d\n", amount);

    printf("What item would you like to buy?: ");
    fgets(itemName, sizeof(itemName), stdin);
    itemName[strlen(itemName)-1] = '\0';   //eliminate the "\n" saved in itemName

    printf("What is the price for each?: ");
    scanf("%lf", &price);
    printf("How many would you like?: ");
    scanf("%d", &amount);

    printf("You have bought %d %s/s\n", amount, itemName);
    printf("The total is: $%.2f", price * amount);

    

    return 0;
}