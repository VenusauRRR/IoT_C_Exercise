#include <stdio.h>

void ex18_print3x3Array(int array[3][3]);
int ex19_sumRow(int arr[][3], int rowIndex);
int ex19_sumColoumn(int arr[][3], int columnIndex);

int main(void){

    //Exercise 18
    // Tvådimensionell array– matrisutskrift Skapa en 3×3 matris och skriv ut den
    //  snyggt formaterad
    int arr[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    ex18_print3x3Array(arr);

    //Exercise 19
    //Summan av varje rad och kolumn För en 3×3 matris: skriv ut summan av varje
    //rad och kolumn.
    for (int i = 0; i < 3; i++)
    {
        printf("Subtotal at row %d: %d\n", i, ex19_sumRow(arr,i));
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Subtotal at column %d: %d\n", i, ex19_sumColoumn(arr,i));
    }
    
    return 0;
}

void ex18_print3x3Array(int array[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}

int ex19_sumRow(int arr[][3], int rowIndex){
    int total = 0;
    for (int i = 0; i < 3; i++)
    {  
        total += arr[rowIndex][i];
    }
    return total;
}

int ex19_sumColoumn(int arr[][3], int columnIndex){
    int total = 0;
    for (int i = 0; i < 3; i++)
    {  
        total += arr[i][columnIndex];
    }
    return total;
}

