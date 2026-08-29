// Ek sorted array hai: arr = [1, 2, 2, 2, 3, 4, 4, 5]
// target = 2

// Find karo target ka FIRST aur LAST occurrence (dono index).
// Expected output: first=1, last=3


#include <stdio.h>

int find_first(int arr[], int size, int target) {
    int left=0;
    int right =size-1;
    int result=-1;
    while(left<=right){
        int mid =(left+right)/2;
        if (arr[mid]==target){
            result= mid ;
            right=mid-1; // search in the left half for the first occurrence
        }
        else if (arr[mid]<target){
            left=mid +1;
        }
        else{
            right=mid-1;
        }
    }
    return result;
}

int find_last(int arr[],int size ,int target){
    int left=0;
    int right =size -1 ;
    int result =-1;
    while (left<=right){
        int mid =(left+right) /2;
        if (arr[mid]==target){
            result=mid;
            left=mid+1;
        }
        else if (arr[mid]<target) {
            left=mid+1;
        
        }
        else {
            right=mid-1;
        }
    }
    return result;

}




int binary_search (int arr[],int size ,int target){
    int left=0;
    int right =size-1;
    while(left<=right){
        int mid =(left+right)/2;
        if (arr[mid]==target){
            return mid ;
            
        }
        else if (arr[mid]<target){
            left=mid +1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

void main(){
    int arr[8]={1, 2, 2, 2, 3, 4, 4, 5};
    int target = 2;
    int size=8;
    int result=binary_search(arr,size,target);
    int first_occurrence=find_first(arr, size,target);
    int last_occurrence=find_last(arr,size,target);
    printf("result found at %d\n",result);
    printf("First occurrence: %d\n", first_occurrence);
    printf("Last occurrence: %d\n", last_occurrence);
}



// RESULT->there was  little bugs (4 bugs ) ,i fixed them and in core logic there was no issue ...