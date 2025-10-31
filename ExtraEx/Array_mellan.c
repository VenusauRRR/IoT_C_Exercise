#include <stdio.h>
#include <math.h>

void printArray(int *array, int size);
void ex11_swapPositionInArray(int *index1, int *index2);
int ex12_counterNumber(int *array, int target, int size);
void ex13_sortArray(int *array, int size);

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

    // //Exercise 11
    // // Byt plats på element Låt användaren skriva in 5 tal. Byt plats på första och sista elementet
    // int arr[5] = {0};
    // printf("Enter 5 numbers seperating by space:\n");
    // for(int i = 0; i < 5; i++){
    //     scanf("%d", &arr[i]);
    // }
    // ex11_swapPositionInArray(&arr[0], &arr[4]);
    // for (int i = 0; i < 5; i++){
    //     printf("number at index %d: %d\n", i, arr[i]);
    // }
    
    // //Exercise 12
    // //Räkna förekomster Räkna hur många gånger ett visst tal förekommer i arrayen.
    // int arr[10] = {4,9,2,10,3,6,8,2,7,5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int target;
    // printf("Enter a number to count (1-10): ");
    // scanf("%d", &target);
    // int resultCount = ex12_counterNumber(arr, target, size);
    // resultCount == 0 ? printf("No such number\n"): printf("number of count for %d: %d\n", target, resultCount);

    //Exercise 13
    // Sortera (bubblesort) Implementera bubble sort för att sortera en array i stigande ordning.
    int arr[10] = {4,9,2,10,3,6,8,2,7,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    ex13_sortArray(arr, size);
    printArray(arr, size);

    
    return 0;
}

void printArray(int *array, int size){
    for (int i = 0; i < size; i++){
        printf("%d: %d\n", i, array[i]);
    }
}

void ex11_swapPositionInArray(int *index1, int *index2){
    int tmp = *index1;
    *index1 = *index2;
    *index2 = tmp;
}

int ex12_counterNumber(int *array, int target, int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target){
            count++;
        }
    }
    return count;
}

void ex13_sortArray(int *array, int size){
    int temp = array[0];
    for (int i = 0; i < size -1 ; i++)
    {
        for (int j = 0; j < size-1  ; j++)
        {
            if (array[j] > array[j+1]){
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}


