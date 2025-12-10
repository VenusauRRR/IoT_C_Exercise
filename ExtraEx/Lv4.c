#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//exercise from chatGPT
// Level 4 — Functions + dynamic memory
// Duplicate string
// char *my_strdup(const char *s);
char *my_strdup(const char *s){
    char *temp = malloc(strlen(s) + 1);
    if (temp == NULL){
        return NULL;
    }
    strcpy(temp,s);
    temp[strlen(s)+1] = '\0';
    return temp;
}

char *my_strDouble(const char *s){
    char *temp = malloc(strlen(s));
    if (temp != NULL){
        strcpy(temp,s);
        strcpy(temp+strlen(s),s);
    }
    return temp;
}

// (you must malloc)
// Split string
// char **split(const char *s, char sep);
char **split(const char *s, char sep){
    char **temp = malloc(strlen(s) * sizeof(char *));
    int count = 0;
    int startIdx = 0;
    int endIdx = 0;
    for (size_t i = 0; i <= strlen(s); i++)
    {
        if (*(s+i) != sep && *(s+i) != '\0'){
            endIdx=i;
        } else{
            char *buf = malloc(endIdx-startIdx +2);
            int idxCount = 0;
            for (size_t j = startIdx; j <= endIdx; j++)
            {
                buf[idxCount] = *(s+j);
                idxCount++;
            }
            buf[idxCount] = '\0';
            temp[count] = buf;
            // printf("%s\n", temp[count]);
            startIdx=endIdx+2;
            count++;
        };
    }
    return temp;
}



char **split_NOT_WORKING(const char *s, char sep){
    char **temp = malloc(strlen(s) * sizeof(char *));
    int count = 0;
    int startIdx = 0;
    int endIdx = 0;
    for (size_t i = 0; i <= strlen(s); i++)
    {
        if (*(s+i) != sep && *(s+i) != '\0'){
            endIdx=i;
        } else{
            char buf[endIdx-startIdx +2];
            int idxCount = 0;
            for (size_t j = startIdx; j <= endIdx; j++)
            {
                buf[idxCount] = *(s+j);
                idxCount++;
            }
            buf[idxCount] = '\0';
            temp[count] = buf;
            printf("%s\n", temp[count]);
            startIdx=endIdx+2;
            count++;
        };
    }
    return temp;
}


// (end with NULL)
// Free what you allocate
// void free_split(char **arr);
void free_split(char **arr){
    int idx = 0;
    while (arr[idx] != NULL)
    {
        idx++;
    }
    for (size_t i = 0; i < idx; i++)
    {
        free(arr[i]);
        printf("arr[%d] is freed\n", i);
    }
    free(arr);
    printf("Array is freed\n");
}


int main(void){
    char arr[] = "How are you";
    // char *p = my_strdup(arr);
    // printf("%s\n", p);
    // free(p);


    char **split_arr = split(arr,' ');
    if (split_arr != NULL){
        printf("%s\n", split_arr[0]);
        printf("%s\n", split_arr[1]);
        printf("%s\n", split_arr[2]);
    }
    free_split(split_arr);
    return 0;
}