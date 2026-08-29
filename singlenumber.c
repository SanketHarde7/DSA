#include<stdio.h>
int main()
{
    printf("how many elements ?");
    int n;
    scanf("%d",&n);
    printf("enter the elements \n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        // int flag=0;
        // for (int j=0;j<n;j++){
        //     if (arr[i] ==arr[j]){
        //         flag=1;
        //          }

            
        // }
        pritnf("%d",arr[i]);
    }
    return 0;
}