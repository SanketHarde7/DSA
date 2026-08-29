#include<stdio.h>
void main(){
int   best_left=0;
int   best_right=0;
int arr[6] = {2, 1, 5, 2, 3, 2};
int target = 7;
int left=0 ,sum=0,min_length=1000;
for (int right=0;right<6;right++){
    sum += arr[right];
    while (sum>=target){
       int current_length = right-left+1;
       if (current_length < min_length){
        min_length = current_length;
           best_left = left;
          best_right = right;
       }
       sum =sum-arr[left];
       left++;  
 
    }
}

printf("minimum lenght is :%d",min_length);
printf("\n");
for (int i=best_left;i<=best_right;i++){
    printf("%d ",arr[i]);
}
}