#include <stdio.h>
#include <stdlib.h>

void environName(void){
    char *name = getenv("USERNAME");
    printf("environ name: %s\n", name);
}