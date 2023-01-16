#include<stdio.h>
#include<stdbool.h>

#define capacity 5

int my_queue[capacity];
int front = 0, rear = -1, totalitem = 0;

bool is_full(){
    if(totalitem == capacity){
        return true;
    }
    return false;
}

bool is_empty(){
    if(totalitem == 0){

        return true;
    }
    return false;
}

void enqueue(int item){
    if(is_full()){
        printf("Queue is Full\n");
        return;
    }
    rear  = (rear + 1) % capacity;
    my_queue[rear]= item;
    totalitem++;
}
int dequeue(){
    if(is_empty()){
        printf("Queue is Empty\n");
        return 0;
    }
    int front_item = my_queue[front];
    front = (front +1)% capacity;
    totalitem--;
    return front_item;

}
void queue_print(){
    int i;
    printf("Queue : ");
    for(i=0;i<capacity;i++){
        printf("%d  ",my_queue[i]);
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    queue_print();
    enqueue(50);
    enqueue(60);
    queue_print();
    printf("dequeue item : %d\n",dequeue());
    enqueue(60);
    queue_print();

}
