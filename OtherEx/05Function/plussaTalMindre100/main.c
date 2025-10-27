#include <stdio.h>
int plussaTalMindre100(int a, int b);
int main(void){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Result: %d", plussaTalMindre100(a,b));
    return 0;
}

int plussaTalMindre100(int a, int b){
    if (a < 100 && b < 100){
        return a + b;
    } else if (a >= 100 && b<100){
        return b;
    } else if (b >= 100 && a<100){
        return a;
    } else {
        return 0;
    }
}