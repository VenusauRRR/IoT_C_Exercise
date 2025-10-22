#include <stdio.h>
#include <stdlib.h>

void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main(void){
    int choice = 0;
    float balance = 1000.0f;
    float amount = 0.0f;

    do{
        printf("Select an option:\n");
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice!=4);
    
    
    return 0;
}

void checkBalance(float balance){
    printf("Your current balance is: $%.2f\n", balance);
}

float withdraw(float balance){
    float amount = 0.0f;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if (amount<0){
        printf("Amount must be bigger than 0\n");
        return 0.0f;
    } else if (amount >balance){
        printf("Insufficient funds! Your balance is $%.2f\n", balance);
        return 0.0f;
    } else {
        printf("Successfully withdraw! Your new balance is $%.2f\n", balance-amount);
        return amount;
    }
}

float deposit(float balance){
    float amount = 0.0f;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if(amount<0){
        printf("Invalid amount!\n");
        return 0.0f;
    } else {
        printf("Successfully deposit! Your new balance is $%.2f\n", balance+amount);
        return amount;
    }
}

