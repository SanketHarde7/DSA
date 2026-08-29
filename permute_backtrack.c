#include<stdio.h>
int current[10];
int currentSize=0;
int used[10]={0};
void permute(int nums[],int n){
    if (currentSize==n){
        printf("[");
        for (int i=0; i<currentSize;i++) {
            printf("%d",current[i]);
        
        }
        printf("]\n");
        return  ;
    }
for (int i=0;i<n;i++){
    if (used[i]==0){
        current [currentSize]=nums[i];
        currentSize=currentSize+1;  
        used[i]=1;
        permute(nums,n);
        currentSize=currentSize-1;
        used[i]=0;

}
}
}

void main() {
    int arr[3] = {1, 2, 3};
    permute(arr, 3);
}