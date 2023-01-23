#include<stdio.h>
#define max 6
int i;

int binarySearch(int arr[],int item){
    int low = 0,high = max-1,mid;

    for(i=0;i<max;i++){
        if(arr[low] == item) return low;
        else if (arr[high]== item) return high;
        else{
            mid = low +(high-low) /2;
            if(arr[mid] == item) return mid;
            else if(arr[mid]>item) high = mid;
            else if(arr[mid]<item) low = mid;
        }
    }
    return -1;
}
int main(){
    //creating array and taking input
    int arr[max],desiredItem;
    printf("input array items : ");
    for(i=0;i<max;i++){
        scanf("%d",&arr[i]);
    }
    printf("input desired item : ");
    scanf("%d",&desiredItem);
    int result = binarySearch(arr,desiredItem);

    if(result == -1) printf("item not found \n");
    else{
        printf("item found on index : %d\n",result);
    }

}
