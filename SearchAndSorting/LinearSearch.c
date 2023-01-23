#include<stdio.h>
#define max 5
int i;
int search(int arr[],int item){
    for(i=0;i<max;i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

void main(){
    int arr[max],item;
    printf("input numbers:");
    for(i=0;i<max;i++){
        scanf("%d",&arr[i]);
    }
    printf("\ninput search item: ");
    scanf("%d",&item);
    int result = search(arr,item);
    if (result == -1){
        printf("item not found");
    }
    else{
        printf("item found on %d index\n",result);
    }
}
