#include <stdio.h>

int main(){

    char questions[][100] = {"What is the largest planet in the solar system?",
                             "What is the hottest planet?",
                             "What planet has the most mooms?",
                             "Is the Earth flat?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                           "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        // printf("%c\n", answerKey[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        if (guess == answerKey[i]){
            printf("CORRECT!\n");
            score++;
        } else{
            printf("WRONG...\n");
        }
    }
    printf("\nYour score is %d out of %d points\n", score, questionCount);
    
    return 0;
}