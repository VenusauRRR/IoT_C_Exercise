#include <stdio.h>

int ex07_sumArrayWithPointer(int *p);

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


    // //Ex 03
    // //3. NULL-pekare
    // // Sätt int *p = NULL; Gör en säker kontroll innan dereferens och skriv ut ett meddelande om p är NULL.
    // int *p = NULL;
    // if (p == NULL){     //checking if p is pointing to any address or NULL
    //     printf("pointer p is null\n");
    // } else {    //if p has an address, do the dereference
    //     printf("oops, pointer p is not null, and the address is %p, value is %d\n", p, *p);
    // }

//     //Ex 04
// //      4. Pekare och const
// //  Deklarera const int *och int * const och visa vad som får/inte får ändras i kod 
// // (kommentera rader som ska ge fel).
//     int x = 5;
//     const int y = 10;
//     int *i = &x;
//     const int *j = &x;
//     x = 6;
//     y = 20;     //y is a const which is unchangable
//     i = &y;     //pointer i is pointing to a const int y such that pointer i will be unassignable
//     *i = 789;   //int *i value = somethingelse
//     printf("x address is %p\n", &x);
//     printf("j value is %p\n", j);
//     j = &y;     //const int * can point to another address but not the value
//     *j = 123;   //*j = anotherValue --> X not allowed!!!
//     printf("j value is %p\n", j);
    
//     //Ex 05
// //      Byt värden med pekare
// //  Skriv funktionen void swap(int *a, int *b) och testa med två tal.


//     //Ex06
//     //  Storleksskillnad 
//     //  Skriv ut sizeof(int), sizeof(int*) och sizeof(void*) och kom mentera skillnaden.
//     int x = 1;
//     int *y = &x;
//     void *z = &x;
//     printf("sizeof(int) is %d\n", sizeof(x));
//     printf("sizeof(int*) is %d\n", sizeof(y));
//     printf("sizeof(void*) is %d\n", sizeof(z));

    // //Ex 07
    // // 7. Iterera array med pekare 
    // // Givet int a[5] = {1,2,3,4,5}; skriv en funktion som 
    // // summerar med en pekare int *p som flyttas fram tills slutet.
    // int a[5] = {1,2,3,4,5};
    // int *p = a;
    // printf("total sum: %d\n", ex07_sumArrayWithPointer(p));


    //Ex 08
    // 8. *(p+i) vs p[i] Skriv ut arrayelement med båda noteringarna och visa att de matchar.
    int a[5] = {1,2,3,4,5};
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        printf("*(p+1) at index %d = %d\n", i, *(p+i));
        printf("p[%d] has value =    %d\n", i, p[i]);
    }
    


    return 0;
}

int ex07_sumArrayWithPointer(int *p){
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += *p;
        p++;
    }
    
    return total;
}