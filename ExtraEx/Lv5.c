#include <stdio.h>
#include <stdlib.h>

// Level 5 — Real-world pointer thinking (linked to what you’re doing)
// Push front (linked list)
// void push_front(struct Node **head, int v);
struct Node{
    int v;
    struct Node *next;
};

void push_front(struct Node **head, int v){
    // printf("insdie function push_front\n");
    struct Node *temp = malloc(sizeof(struct Node));
    if (temp == NULL){
        // printf("fail malloc\n");
        return;
    }
    temp->v = v;
    // printf("temp v %d\n",temp->v);
    temp->next = *head;
    // printf("Hello\n");
    *head = temp;
    // printf("done\n");
}

// Pop front
// int pop_front(struct Node **head, int *out);
int pop_front(struct Node **head, int *out){
    struct Node *p = *head;
    if (p == NULL){
        return 0;
    } else {
        *head = p->next;
        *out = p->v;
        free(p);
        // printf("inside pop_front: %d\n", *out);
    }
    return 1;
}

int pop_front_NOT_WORKING(struct Node **head, int *out){
    struct Node *p = *head;
    if (p->next != NULL){
        *head = p->next->next;
        *out = (*head)->v;
        printf("inside pop_front: %d\n", *out);
        free((*head)->next);
        printf("free 1st node\n");
    } else{
        free(head);
        printf("free head\n");
    };
    return 1;
}

// List length
// size_t list_len(struct Node *head);
size_t list_len(struct Node *head){
    size_t len = 0;
    struct Node *p = head;
    while (p != NULL)
    {
        p = p->next;
        len++;
    }
    return len;
}

// Free list
// void free_list(struct Node *head);
void free_list(struct Node *head){
    while (head != NULL)
    {
        struct Node *p = head;
        head = p->next;
        free(p);
    }
}

int main(void){
    // struct Node *head = NULL;
    // push_front(&head,5);
    // push_front(&head,2);
    // push_front(&head,4);
    // printf("inside main after calling push_front\n");
    // struct Node *p = head;
    // int count = 0;
    // while (p != NULL)
    // {
    //     printf("%d: %d\n", count, p->v);
    //     p = p->next;
    //     count++;
    // }
    // struct Node *temp = head;
    // while (temp != NULL)
    // {
    //     p = p->next;
    //     free(p);
    // }
    // free(head);
    
    struct Node *head1 = NULL;
    push_front(&head1,3);
    push_front(&head1,2);
    push_front(&head1,4);
    printf("list length: %zu\n", list_len(head1));
    int x;
    int status = pop_front(&head1, &x);
    printf("x = %d\n", x);
    printf("status = %d\n", status);
    printf("list length: %zu\n", list_len(head1));

    free_list(head1);

    return 0;
}