#include <stdio.h>
void main(){
int arr[5]={1, 2, 3, 4, 5};
int k =3; //size of subarray
int sum = 0;
// Step 1: pehli window ka sum manually nikaal (index 0,1,2)
sum = arr[0] + arr[1] + arr[2];
int max_sum = sum;

// Step 2: ab window ko slide kar — i = 3 se start (kyunki 0,1,2 already le liya)
for (int i = 3; i < 5; i++) {
    sum = sum - arr[i-k] + arr[i];   // yaha kya jayega? socho: konsa element bahar gaya, konsa andar aaya
    if (sum > max_sum) {
        max_sum = sum;
    }
}

printf("%d", max_sum);
}
