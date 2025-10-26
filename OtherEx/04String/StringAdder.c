#include <stdio.h>
#include <string.h>

int main(void){

    char s1[50];
    // char s2[50];
    // char s3[50];
    char total[50] = "";

    printf("Enter 1st string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = ' ';
    strcat(total,s1);
    printf("Enter 2nd string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = ' ';
    strcat(total,s1);
    printf("Enter 3rd string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';
    strcat(total,s1);
    printf("%s and it has %d letters\n", total, strlen(total));

    return 0;
}