#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int guess = 0;
    int random = rand() % 100 + 1;
    int counter = 1;
    printf("%d\n", random);
    printf("*** NUMBER GUESSING GAME ***\n");
    do
    {
        printf("Guess a number between 1 - 100: ");
        scanf("%d", &guess);
        if (guess < random){
            printf("TOO LOW!\n");
        } else if (guess > random){
            printf("TOO HIGH!\n");
        } else {
            printf("CORRECT!\n");
            printf("The answer is %d\n", random);
            printf("It took you %d tries\n", counter);
        }
        counter++;
    } while (guess!=random);
    
    
    




    return 0;
}