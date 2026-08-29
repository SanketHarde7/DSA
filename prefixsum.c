#include<stdio.h>
int getsum(int l, int r, int prefix[]);
void main(){
    int arr[8] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = 8;
     int prefix[8];

    prefix[0] = arr[0];
    for (int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
printf("sum of elements from index 0 to 3 is: %d\n", getsum(0, 3, prefix));
printf("Sum of elements from index 2 to 5 is: %d\n", getsum(2, 5, prefix));    

}    
int getsum(int l,int r ,int prefix[]){
if (l==0){
return prefix[r];
}
else if (l>0){
    return prefix[r] - prefix[l-1];
}
else {
    printf("Invalid range");
    return -1;
}
}
        



// 1. start
// 2. n = array size, arr[] diya hai

// 3. // PART A: Prefix array banao
// 4. prefix[0] = arr[0]
// 5. for i = 1 to n-1:
// 6.     prefix[i] = prefix[i-1] + arr[i]

// 7. // PART B: Query answer nikaalo (formula use karke)
// 8. function getRangeSum(l, r):
// 9.     if l == 0:
// 10.        return prefix[r]
// 11.    else:
// 12.        return prefix[r] - prefix[l-1]

// 13. // PART C: Use kar
// 14. print getRangeSum(2, 5)
// 15. print getRangeSum(0, 3)
// 16. stop