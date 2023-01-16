#include<stdio.h>
#define max 4

int stack[max];
int top = -1;

void push(int x){
    if (top< max -1){
        top = top +1;
        stack[top]=x;
        printf("added : %d\n",stack[top]);
    }
    else{
        printf("stack is full\n");
    }
}
int pop(){
    if(top>=0){
        int value = stack[top];
        top = top-1;
        return value;
    }
    else{
        printf("stack empty!!\n");
        return -1;
    }
}
 int peek(){
     if(top>=0){
         return stack[top];
     }
     else {
         printf("empty stack\n");
         return -1;
     }
 }

 int main(){
     push(10);
     push(20);
     push(100);
     printf("showed last added item : %d\n",peek());
     push(60);
     printf("showed last added item : %d\n",peek());
     push(50);
     printf("removed last added item : %d\n",pop());
     printf("showed last added item : %d\n",peek());
 }
