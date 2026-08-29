#include <stdio.h>

int kadan(int arr[], int size) {
  int max = arr[0] ;
  int currentsum = 0;
  for (int i = 0; i < size; i++) {
    currentsum = currentsum + arr[i];
    if (currentsum > max) {
      max = currentsum;
    }
    if (currentsum < 0) {
      currentsum = 0;
    }
  }
  return max;
}

void main() {
  int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int size = 9;
  int target = 6;
  int max_sum = kadan(arr, size);
  printf("the max sum is %d\n", max_sum);
}