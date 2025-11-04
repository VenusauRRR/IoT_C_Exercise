#include <stdio.h>

int main(void)
{
    // // Ex 01
    // //      1. Adress & dereferens
    // // Skapa en int x = 42;. Skriv ut värdet, adressen till x, och
    // //  värdet via en int *p = &x. Ändra sedan *p = 99; och skriv ut x igen.
    // int x = 42;
    // int *p = &x;
    // printf("x = %d and its address = %p\n", x, &x);
    // printf("address of p itself is %p\n", &p);
    // printf("value of p is address of x which is %p, \nthe value of *p is x which is %d\n", p, *p);
    // *p = 99;
    // printf("dereference *p has assigned to 99 such that x = %d\n", x);

    // // Ex 02
    // //      2. Pekare och scanf
    // //  Läs in ett heltal med scanf("%d", &x); via en pekare p och skriv ut resultatet
    // int x;
    // int *p = &x;
    // printf("Enter a number: ");
    // scanf("%d", &x);
    // printf("x = %d\n", *p);


    //Ex 03
    //3. NULL-pekare
    // Sätt int *p = NULL; Gör en säker kontroll innan dereferens och skriv ut ett meddelande om p är NULL.
    int *p = NULL;
    if (p == NULL){     //checking if p is pointing to any address or NULL
        printf("pointer p is null\n");
    } else {    //if p has an address, do the dereference
        printf("oops, pointer p is not null, and the address is %p, value is %d\n", p, *p);
    }


    return 0;
}