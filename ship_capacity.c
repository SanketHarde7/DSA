#include<stdio.h>
long long days_needed(int weights[], int size, int capacity) {
    long long days = 1;           // pehla din already shuru maan lo
    long long current_load = 0;   // aaj tak ka weight
    
    for (int i = 0; i < size; i++) {
        if (current_load + weights[i] > capacity) {
            // yeh package aaj ke din fit nahi ho raha
            days = days + 1;           // naya din shuru
            current_load = weights[i];  // is package se naya din start
        } else {
            // aaj ke din hi fit ho raha hai
            current_load = current_load + weights[i];
        }
    }
    
    return days;
}

int minShipDays(int weights[], int size, int days_limit) { 
    int high = 0;  
    int low = weights[0];
    for (int i = 0; i < size; i++) {
    if (weights[i] > low) {
        low = weights[i];   // max nikal rahe hain
    }
    high = high + weights[i];   // sum bhi sath mein bana rahe hain
} 

    int result = high;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        long long d = days_needed(weights, size, mid);
        
        if (d <= days_limit) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

void main() {
    int weights[5] = {1, 2, 3, 4, 5};
    int result = minShipDays(weights, 5 , 3);
    printf("Minimum ship capacity: %d\n", result);
     long long days = days_needed(weights, 5, result);   // is capacity pe kitne din lagte hain
    printf("Days needed at this capacity: %lld", days);
   
}