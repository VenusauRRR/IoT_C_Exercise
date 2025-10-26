#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

int main(void){

    // //Loop #1
    // for (int i = 0; i <= 10; i++){
    //     printf("%d: %d\n", i, i); 
    // }

    // int j = 0;
    // while (j <= 10)
    // {
    //     printf("%d: %d\n", j, j); 
    //     j++;
    // }

    //Loop #6: rolling the dice
    srand(time(NULL));
    char answer = '\0';
    while (true)
    {
        printf("\nRolling the dices...\n");
        printf("The values are...\n");
        printf("%d\n", rand() % 6 + 1);
        printf("%d\n", rand() % 6 + 1);
        printf("Roll the dices again? (Y/N)");
        scanf(" %c", &answer);
        if (toupper(answer)=='N'){
            break;
        }
    }
    return 0;
}