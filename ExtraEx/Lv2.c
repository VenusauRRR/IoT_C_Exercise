#include <stdio.h>
//exercise from chatGPT about C
// Level 2 — Arrays & pointers (core C mental model)
// Sum of array
// int sum(int *arr, int n);
int sum(int *arr, int size){
    int total;
    for (size_t i = 0; i < size; i++)
    {
        total += *(arr+i);
    }
    return total;
}

// (no [], use pointer arithmetic)
// Reverse array in place
// void reverse(int *arr, int n);
void reverse(int *arr, int size){
    for (size_t i = 0; i < size/2; i++)
    {
        int temp = *(arr+i);
        *(arr+i) = *(arr+size-1-i);
        *(arr+size-1-i) = temp;
    }
}

// Find element
// int *find(int *arr, int n, int v);
// (return pointer or NULL)
int *find(int *arr, int size, int target){
    for (size_t i = 0; i < size; i++)
    {
        if (*(arr+i)==target){
            return arr+i;
        }
    }
    return NULL;
}


int main(void){
    int nr[8] = {2,2,3,3,4,4,5,5};
    printf("total = %d\n", sum(nr,8));

    int nr2[8] = {1,2,3,4,5,6,7,8};
    reverse(nr2,8);
    for (size_t i = 0; i < 8; i++)
    {
        printf("%d\n", nr2[i]);
    }

    int *p = find(nr2, 8, 11);
    if (p != NULL){
        printf("found! %d\n", *p);
    } else {
        printf("not found!\n");
    }
    
    return 0;
}