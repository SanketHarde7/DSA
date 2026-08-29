#include<stdio.h>
int subset[10];
int subsetSize=0;
void choose(int arr[],int n,int index){
    if (index==n){
        printf("[");
        for (int i=0; i<subsetSize;i++) {
            printf("%d",subset[i]);
        
        }
        printf("]\n");
        return  ;
    }
    // choice 1 include karo 
    subset[subsetSize]=arr[index];
    subsetSize=subsetSize+1;
    choose(arr,n,index+1);
    subsetSize=subsetSize-1; //backtrack karo 
    // choose 2 exclude karo 
    choose(arr,n,index+1);
    
}
void main(){
    void choose(int arr[],int n,int index);
    int arr[3]={1,2,3};
    choose(arr,3,0);
}