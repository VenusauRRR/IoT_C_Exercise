#include <stdio.h>

int main(){
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}