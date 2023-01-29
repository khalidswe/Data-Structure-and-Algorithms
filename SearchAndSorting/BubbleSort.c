#include<stdio.h>
#define max 6
int i,j;

void bubbleSort(int arr[]){
    for(i=0;i<max-1;i++){
        int swap = 0;
        for(j=0;j<max-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0) break;
    }
}
void print(int arr[]){
    for(i=0;i<max;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int arr[max];
    printf("input array items : ");
    for(i=0;i<max;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr);

    printf("After sort : \n");
    print(arr);
}
