#include <stdio.h>

int main(void){
    int i;
    printf("value of i %d\n", i);
    scanf("%d", &i);
    printf("value of i is %d and is at address %p\n", i, (void*)&i);
}