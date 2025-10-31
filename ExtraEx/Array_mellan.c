#include <stdio.h>

void ex11_swapPositionInArray(int *index1, int *index2);

int main(void){
    // //Exercise 09
    // // Kopiera en array Kopiera innehållet i en array till en annan med en loop.
    // int arr[5] = {1,2,3,4,5};
    // int arr2[10] = {0};

    // int size = sizeof(arr2)/sizeof(arr2[0]);

    // for(int i = 0; i < size; i++){
    //     printf("%d\n", i);
    //     printf("before: %d\n", arr2[i]);
    //     arr2[i] = arr[i];
    //     printf("after: %d\n", arr2[i]);
    // }

    // //Exercise 10
    // //Summera två arrayer Skapa två arrayer med 5 heltal vardera. Skapa en tredje
    // //som innehåller summan av motsvarande element
    // int arr[5] = {1,2,3,4,5};
    // int arr2[5] = {6,7,8,9,10};
    // int arrTotal[5] = {0};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     arrTotal[i] = arr[i] + arr2[i];
    // }
    // for (int i = 0; i < size; i++){
    //     printf("Array sum at index %d: %d\n", i, arrTotal[i]);
    // }

    //Exercise 11
    // Byt plats på element Låt användaren skriva in 5 tal. Byt plats på första och sista elementet
    int arr[5] = {0};
    printf("Enter 5 numbers seperating by space:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    ex11_swapPositionInArray(&arr[0], &arr[4]);
    for (int i = 0; i < 5; i++){
        printf("number at index %d: %d\n", i, arr[i]);
    }
    
    
    return 0;
}

void ex11_swapPositionInArray(int *index1, int *index2){
    int tmp = *index1;
    *index1 = *index2;
    *index2 = tmp;
}