#include <stdio.h>
//Exercise from ChatGPT about C
// Level 1 — Pointer basics (no arrays yet)
// Swap two integers
// void swap(int *a, int *b);

void ex1_swap(int *a, int *b){
    int temp = *a; //1
    *a = *b;
    *b = temp;
}
// Return a value via pointer
// void max_min(int a, int b, int *max, int *min);
void ex2_max_min(int a, int b, int *max, int *min){
    if (a<b){
        *min = a;
        *max = b;
    } else {
        *max = a;
        *min = b;
    }
}
// Check for NULL
// int safe_read(const int *p, int *out);
int ex3_safe_read(const int *p, int *out){
    if (p != NULL){
        *out = *p;
        return 1;
    }
    return 0;
}

int main(void){
    //ex1
    int a = 1;
    int b = 2;
    printf("a=%d, b=%d\n", a, b);
    ex1_swap(&a,&b);
    printf("a=%d, b=%d\n", a, b);
    
    //ex2
    int min;
    int max;
    ex2_max_min(9,32,&max,&min);
    printf("max = %d, min = %d\n", max, min);

    //ex3
    int x = 6;
    int result;
    ex3_safe_read(&x, &result);
    printf("result = %d\n", result);

    return 0;
}