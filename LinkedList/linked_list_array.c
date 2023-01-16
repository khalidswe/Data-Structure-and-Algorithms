#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node{
    int data;
    struct node *next;
};

struct node *createLinkedList(int arr[],int size);
int searchInLinkedList(struct node *head,int value);
void print(struct node *head);
void reverseLinkedList(struct node *head);

struct node *createLinkedList(int arr[],int size){
    struct node *head = NULL, *temp= NULL, *current =NULL;

    int i;
    for(i=0;i<size;i++){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current -> next = temp;
            current = current->next;
        }
    }
    return head;

};
int searchInLinkedList(struct node *head, int value){
    int index= 1;

    while(head != NULL){
        if(head->data == value){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}
void reverseLinkedList(struct node *head){
    struct node *prev= NULL, *current = head, *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    print(head);
}

void print(struct node *head){
    while(head != NULL){
        printf("%d --> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main(){
    int a[]={5,10,15,20,30,40,50,60,70,100};
    struct node *head =NULL;
    head = createLinkedList(a,10);
    print(head);
    printf("10 found at : %d\n",searchInLinkedList(head,10));
    reverseLinkedList(head);

    return 0;
}
