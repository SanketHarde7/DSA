#include<stdio.h>
void main(){
    int arr[5]={1, 2, 3, 4, 6};
    int target=6;
    int left=0;
    int right=4;

    while(left<right){
        int sum=arr[left]+arr[right];
        if (sum==target){
            printf("the pair is %d and %d (indices %d and %d)", arr[left], arr[right], left, right);
            break;
        }
        else if (sum<target){
            left++;
        }
        else{
            right--;
        }
    }
}