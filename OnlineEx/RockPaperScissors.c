#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkWinner(int computerChoice, int userChoice);

char* printChoice(int choice);

int main(void){
    srand(time(NULL));
    int userChoice = 0;
    int computerChoice = rand() % 3 + 1;

    printf("*** ROCK PAPER SCISSORS ***\n");
    printf("Choose an option\n");
    printf("1. ROCK\n2. PAPER\n3. SCISSORS\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    printf("You chose %s", printChoice(userChoice));
    printf("Computer chose %s", printChoice(computerChoice));
    checkWinner(computerChoice, userChoice);

    return 0;
}

void checkWinner(int computerChoice, int userChoice){
    if (userChoice == computerChoice){
        printf("It's a TIE!\n");
    } else if ((computerChoice == 1 && userChoice == 2) ||  //Rock vs Paper
                (computerChoice == 2 && userChoice == 3) || //Paper vs Scissor
                (computerChoice == 3 && userChoice == 1)){  //Scissor vs Rock
        printf("You WIN!\n");
    } else if ((computerChoice == 1 && userChoice == 3) ||  //Rock vs Scissor
                (computerChoice == 2 && userChoice == 1) || //Paper vs Rock
                (computerChoice == 3 && userChoice == 2)){  //Scissor vs Paper
        printf("You LOSE...\n");
    } else {
        printf("Invalid input!\n");
    }
}

char* printChoice(int choice){
    switch (choice){
        case 1: return "ROCK\n";
        case 2: return "PAPER\n";
        case 3: return "SCISSORS\n";
        default: return "Invalid\n";
    }
}