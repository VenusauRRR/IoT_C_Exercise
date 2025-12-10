#include <stdio.h>
#include <stdlib.h>

void push_front(struct Node **head, int v);

struct Node
{
    int v; 
    struct Node* next; 
};


int main(void){

    struct Node node1;
    node1.v = 1;
    node1.next = NULL;

    struct Node *p = &node1;

    push_front(&p, 2);

    printf("%d\n", node1.next->v);

    return 0;
}

void push_front(struct Node **head, int v){
    struct Node *list = malloc(sizeof(struct Node));
}