#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main() {
    //#initialize nodes
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    //#allocate memory
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));

    //#assign value
    a->data = 10;
    b->data = 20;
    c->data = 30;

    //#connect nodes
    a->next = b;
    b->next = c;
    c->next = NULL;

    //#print
    while(a!= NULL){
        printf("%d ->",a->data);
        a = a->next;
    }
    printf("NUll\n");

    return 0;
}
