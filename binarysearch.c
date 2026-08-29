#include<stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid]==target){
            return mid;  // target found
        } else if (arr[mid] < target) {
            left = mid + 1;  // search in the right half
        } else {
            right = mid - 1; // search in the left half
        }
    }
    
    return -1;   // nahi mila
}

void main() {
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int target = 23;
    int result = binary_search(arr, 10, target);
    printf("Found at index: %d", result);
}