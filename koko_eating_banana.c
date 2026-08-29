// this is upgraded version of binary search variation 1 . (first and last occurrence of an element in sorted array)
#include<stdio.h>

// Step 1: Agar speed 'k' di ho, total kitne ghante lagenge sab piles khane mein?
int hours_needed(int piles[], int size, int k) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += (piles[i] + k - 1) / k;   // yeh ceiling nikalne ka trick hai
    }
    return total;
}

int minEatingSpeed(int piles[], int size, int h) {
    int low = 1;
    int high = piles[0];
    
    // high ko max(piles) banana — sबसे badi pile hi max possible useful speed hai
    // array ki sabse badi value ko find kari hai ...
    for (int i = 1; i < size; i++) {
        if (piles[i] > high) {
            high = piles[i];
        }
    }
    
    int result = high;  // agar kuch na mile, safe fallback
    // now here ,the same logic of first and last occurrence of an element...
    while (low <= high) {
        int mid = (low + high) / 2;
        int hrs = hours_needed(piles, size, mid);
        
        if (hrs <= h) {
            result = mid;      // yeh speed kaam karti hai, save kar
            high = mid - 1;     // lekin chhoti speed try karo (better answer dhundo)
        } else {
            low = mid + 1;      // yeh speed kaafi nahi thi, badi speed chahiye
        }
    }
    
    return result;
}

void main() {
    int piles[4] = {3, 6, 7, 11};
    int result = minEatingSpeed(piles, 4, 8);
    printf("Minimum speed: %d", result);
}