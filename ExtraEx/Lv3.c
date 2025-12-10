#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//exercise from chatGDP
// Level 3 — Strings (char pointers & arrays)
// String length
// size_t my_strlen(const char *s);
size_t my_strlen(const char *s){
    size_t count = 0;
    while ((*s) != '\0')
    {
        // printf("%c\n", *s);
        s++;
        count++;
    }
    return count;
}
// String copy
// char *my_strcpy(char *dst, const char *src);
char *my_strcpy(char *dst, const char *src){
    char *start = dst;
    int count = 0;
    while ((*src) != '\0')
    {
        (*dst) = (*src);
        dst++;
        src++;
        count++;
    };
    *dst = '\0';
    return start;
}

// String compare
// int my_strcmp(const char *a, const char *b);
int my_strcmp(const char *a, const char *b){

    while (*a != '\0' && *b != '\0')
    {
        if (*a - *b != 0){
            return (unsigned char)*a - (unsigned char)*b;
        }
        a++;
        b++;
    }
    return (unsigned char)*a - (unsigned char)*b;
}

// Reverse string
// void strrev(char *s);
void strrev(char *s){
    for (size_t i = 0; i < my_strlen(s)/2; i++)
    {
        char c = *(s + my_strlen(s) - 1 - i);
        *(s + my_strlen(s) - 1 - i) = *(s + i);
        *(s + i) = c;
    }
}


int main(void){
    // char arr[10] = {"Hello Wor"};
    // for (size_t i = 0; i < 10; i++)
    // {
    //     printf("%c\n", arr[i]);
    // }
    // char *str = "Hihi World xx";
    // printf("string length = %d\n",my_strlen(str));
    
    // char *str2 = malloc((my_strlen(str)+1) * sizeof(char));
    // if (str2 == NULL) return 0;
    // printf("%s\n",str2);
    // my_strcpy(str2,str);
    // printf("%s\n",str2);
    // free(str2);  

    // char *strX = "Good weather today";
    // char *strY = "Hello";
    // char *strZ = "Good weather today";
    // printf("%d\n", my_strcmp(strX,strZ));

    char arr[] = "Happy Birthday";
    printf("before rev %s\n", arr);
    strrev(arr);
    printf("after rev %s\n", arr);
    
    return 0;
}