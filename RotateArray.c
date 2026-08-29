#include<stdio.h>
void main(){
    int arr[]={19,2,11,44,12,48};
    int size=6;
    int i ,j ;
    printf ("how many elements you want to rotate :");
    int n;
    scanf("%d",&n);
    for(i=size-1;i<=n;i--){
        printf("%d ",arr[i]);

    }
    return 0;
}