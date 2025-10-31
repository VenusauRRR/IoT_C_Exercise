#include <stdio.h>
#include <string.h>

int main(void){

    char words[50];

    printf("Enter a sentence: ");
    fgets(words, sizeof(words), stdin);
    printf("%s", words);
    char *splitStr = strtok(words," ");
    while (splitStr!=NULL)
    {
        printf("%s\n", splitStr);
        splitStr = strtok(NULL, " ");
        printf("%s", splitStr[1]);
    }
    

    return 0;
}