#include <stdio.h>
#include <string.h>

int main()
{
    char adjective1[30] = "";
    char noun[30] = "";
    char adjective2[30] = "";
    char verb[30] = "";
    char adjective3[30] = "";

    // printf("%s: \n", adjective1);
    // printf("%s: \n", noun);
    // printf("%s: \n", adjective2);
    // printf("%s: \n", verb);
    // printf("%s: \n", adjective3);


    printf("Enter an adjective (description): ");
    scanf("%s", &adjective1);
    getchar();

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0';
    
    printf("Enter an adjective (description): ");
    scanf(" %s", &adjective2);

    printf("Enter a verb (ending w/ -ing): ");
    scanf(" %s", &verb);

    printf("Enter an adjective (description): ");
    scanf(" %s", &adjective3);

    printf("\n");
    printf("Today I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a  %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);

    return 0;
}