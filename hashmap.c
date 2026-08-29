#include<stdio.h>
void main(){
   int  arr[4] = {3, 4, 6, 2};
   int seen[7]={0};
   int  target = 8;

   for (int i =0 ;i< 4;i++){
    int need = target - arr[i];
    if (seen[need]==1){
    printf("the elements are %d and %d ",need,arr[i]);
    }
    seen[arr[i]] = 1; 
   }

}