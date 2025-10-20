#include <stdio.h>

int main(){
    float celsius = 0.0f;
    float fahreheit = 0.0f;
    char choice = '\0';

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahreheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C'){
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahreheit = (celsius * 9 / 5) + 32;
        printf("%.2f Celsius to equal to %.2f Fahrenheit", celsius, fahreheit);
    } else if (choice == 'F'){
        printf("Enter the temperature in Fahrenhetit: ");
        scanf("%f", &fahreheit);
        celsius = (fahreheit - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius", fahreheit, celsius);
    } else {
        printf("Invalid input!");
    }

    return 0;
}