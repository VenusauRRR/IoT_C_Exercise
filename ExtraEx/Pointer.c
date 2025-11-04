#include <stdio.h>

int main(void){
    //Ex 01
//      1. Adress & dereferens Skapa en int x = 42;. Skriv ut värdet, adressen till x, och
//  värdet via en int *p = &x. Ändra sedan *p = 99; och skriv ut x igen.
    int x = 42;
    int *p = &x;
    printf("x = %d and its address = %p\n", x, &x);
    printf("address of p itself is %p\n", &p);
    printf("value of p is address of x which is %p, \nthe value of *p is x which is %d\n", p, *p);
    *p = 99;
    printf("dereference *p has assigned to 99 such that x = %d\n", x);


    return 0;
}