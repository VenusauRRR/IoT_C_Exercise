#include <stdio.h>

int main(){
    double nr1 = 0.0;
    double nr2 = 0.0;
    double total = 0.0;
    char operator = '\0';
    printf("Enter the first number: ");
    scanf("%lf", &nr1);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);
    printf("Enter the seconde number: ");
    scanf("%lf", &nr2);
    switch (operator)
    {
    case '+':
        total = nr1 + nr2; break;
    case '-':
        total = nr1 - nr2; break;
    case '*':
        total = nr1 * nr2; break;
    case '/':
        total = nr1 / nr2; break;
    default:
        printf("Invalid input\n");
    }

    printf("Result: %.2f", total);
    return 0;
}