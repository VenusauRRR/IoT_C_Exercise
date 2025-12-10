#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
} Point;

typedef struct { char *name; int age; } Person;

int ex07_sumArrayWithPointer(int *p);
void ex09_my_memset(void *dst, int value, size_t n);
int *ex10_max_ptr(int *begin, size_t n);
void ex15_my_strcpy(char *dst, const char *src);
char *ex15_my_strcpy2(char *dst, const char *src, size_t dst_size);
size_t ex16_my_strlen(const char *s);
Person ex18_clone(const Person *p);
void ex18_person_free(Person*);

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

    // //Ex 08
    // // 8. *(p+i) vs p[i] Skriv ut arrayelement med båda noteringarna och visa att de matchar.
    // int a[5] = {1,2,3,4,5};
    // int *p = a;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("*(p+1) at index %d = %d\n", i, *(p+i));
    //     printf("p[%d] has value =    %d\n", i, p[i]);
    // }

    // // Ex 09
    // //  Skriv memset-light
    // //  Implementera void my_memset(void *dst, int value, size_t n) och testa på en char buf[16]
    // char buf[16];
    // for (int i = 0; i < 16; i++)
    // {
    //     printf("%d: %c\n", i, buf[i]);
    // }
    // ex09_my_memset(buf, 'A', 16);
    // for (int i = 0; i < 16; i++)
    // {
    //     printf("%d: %c\n", i, buf[i]);
    // }

    // //Ex 10
    // //  Hitta max med pekare
    // //  int* max_ptr(int *begin, size_t n) ska returnera pekare till största elementet
    // int a[8] = {1,22,4,3,8,6,2,91};
    // printf("The max number found by pointer: %d\n", *ex10_max_ptr(a, 8));

    // //Ex 11
    // //  Pekare till struct
    // //  Definiera struct Point { int x, y; };. Allokera array Point pts[3],
    // //  fyll med data, iterera med struct Point *p och skriv ut med p->x
    // Point pts[3] = {{1,2},
    //                 {5,6},
    //                 {8,9}};
    // Point *p = pts;
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("x-axis at point index %d: %d\n", i, (*(p+i)).x);
    // }

    // Ex 12
    // Const-korrekthet över arrayer
    // Skriv int sum_const(const int *a, size_t n) och visa att funktionen inte kan ändra elementen

    // //Ex13
    // //  malloc/free grund
    // //   Läs n, allokera int *a = malloc(n*sizeof *a), fyll 0..n-1, skriv ut och free(a)
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // int *a = malloc(n* sizeof(*a));
    // for (int i = 0; i < n; i++)
    // {
    //     *(a + i) = i;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("index %d: %d\n", i, *(a+i));
    // }
    // free(a);

    // // Ex 14
    // // realloc för växande buffert
    // //  Läs heltal tills EOF, väx kapaciteten med realloc (dubblera). Skriv ut antal och medelvärde
    // int *p = NULL;
    // int *temp = realloc(p, sizeof(*p) * 5);
    // if (temp == NULL)   //***IMPORTANT*** need to check if realloc is built successfully
    // {
    //     printf("Building realloc failed\n");
    //     // free(p); //free the original pointer if wants to exit the program, otherwise keep it avoiding losing data
    //     exit(1);
    // }
    // p = temp;
    // int count = 0;
    // int capacity = 5;
    // printf("Enter as many numbers as you want (Ctrl+D to end):\n");
    // while (scanf("%d", &p[count]) == 1)     //check if scanf() is reaching the end, 1 means valid integer is read
    // {
    //     printf("You entered: %d\n", p[count]);
    //     count++;
    //     if (count == capacity)
    //     {
    //         capacity *= 2;
    //         printf("capacity: %d\n", capacity);
    //         temp = realloc(p, sizeof(*p) * capacity);
    //         if (temp == NULL)
    //         {
    //             printf("Building realloc failed\n");
    //             // free(p); //free the original pointer if wants to exit the program, otherwise keep it avoiding losing data
    //             exit(1);
    //         }
    //         p = temp;
    //     }
    // }
    // printf("You have entered Ctrl+D\n");
    // int total = 0;
    // for (int i = 0; i < count; i++)
    // {
    //     printf("index %d: %d\n", i, p[i]);
    //     total += p[i];
    // }
    // printf("Total: %d\n", total);
    // printf("Average value: %.2f\n", (float)total/count);
    // free(p);

//     //Ex 15  
// //     Implementera strcpy-light 
// //     char* ex15_my_strcpy(char *dst, const char *src) kopierar inklusive ’\0’. Testa med korta strängar.
//     char s1[20] = "Hello";
//     char s2[20] = "";
//     printf("s1 = %s\n", s1);
//     printf("s2 before copy = %s\n", s2);
//     ex15_my_strcpy(s2, s1);
//     printf("s2 after copy = %s\n", s2);
//     char *s3 = "New String";
//     char *s4 = "";  // NOT OK!!! <--- string literal: read-only memory. char *s4 = mallac(20 * sizeof(char)) or char s4[20] = "" instead;
//     printf("s3 = %s\n", s3);
//     printf("s4 before copy = %s\n", s4);
//     ex15_my_strcpy(s4,s3);
//     printf("s4 after copy = %s\n", s4);
//     char *s5 = "Today is good weather";
//     char *s6 = ex15_my_strcpy2(s6, s5, 20 * sizeof(s5)); // NOT OK!!! <--- s6 not initialized, will cause undefined behavior &
//                                                     // sizeof(s5) is size of a pointer (8 bytes), not size of the string length

    // //Ex 16
    // // Implementera strlen-light size_t ex16_my_strlen(const char *s) utan arrayer, endast pekare.
    // char *s1 = "Hello World";
    // printf("string length = %zu\n", ex16_my_strlen(s1));

    //Ex 17
    // Säker inläsning till buffert 
    //Läs en rad med fgets(buf, sizeof buf, stdin) och ta bort ’\n’ via pekare.

    //Ex 18
//  Skriv Person 
//  ex18_clone(const Person *p) som allokerar och kopierar name. Skriv även void person_free(Person*).
    Person p1 = {"Peter", 27};
    ex18_clone(&p1);


    return 0;
}

int ex07_sumArrayWithPointer(int *p)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += *p;
        p++;
    }
    return total;
}

void ex09_my_memset(void *dst, int value, size_t n)
{
    char *p = dst;
    for (int i = 0; i < n; i++)
    {
        *p = (unsigned char)value;
        p++;
    }
}

int *ex10_max_ptr(int *begin, size_t n)
{
    int *max = begin;
    for (int i = 1; i < n; i++)
    {
        max = *(begin + i) > *max ? (begin + i) : max;
    }
    return max;
}

 void ex15_my_strcpy(char *dst, const char *src){
    strncpy(dst, src, 20 * sizeof(char));
 }

 char *ex15_my_strcpy2(char *dst, const char *src, size_t dst_size){
    strncpy(dst, src, dst_size);
    dst[dst_size-1] = '\0';
    return dst;
 }

size_t ex16_my_strlen(const char *s){
    int count = 0;
    while (*(s+count) != '\0')
    {
        count++;
    }
    return count;
}

Person ex18_clone(const Person *p){
    Person temp = {};
    temp.name = p->name;
    temp.age = p->age;
    printf("name %s age %d\n", temp.name, temp.age);
    return temp;
}

void ex18_person_free(Person *p){
    
}
