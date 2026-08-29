#include<stdio.h>

int find_last(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1; // search in the right half for the last occurrence
            
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int find_first( int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // search in the left half for the first occurrence
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;

}
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
    int arr[7] = {5, 7, 7, 8, 8, 8, 10};
    int target = 8;
    int result = binary_search(arr, 7, target);
    //calling find_first and find_last functions
    int first_occurrence = find_first(arr, 7, target);
    int last_occurrence = find_last(arr, 7, target);
    printf("Found at index: %d\n", result);
    // printf("Found at index: %d\n", result);
printf("First occurrence: %d\n", first_occurrence);
printf("Last occurrence: %d\n", last_occurrence);
}