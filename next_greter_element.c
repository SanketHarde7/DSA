// leetcode problem: Next Greater Element I -496

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int stack[10000];
    int top = -1;
    int hashmap[10001];   // value -> next greater answer (values 1 to 10^4 tak hote hain is problem mein)
    
    for (int i = 0; i <= 10000; i++) {
        hashmap[i] = -1;   // default: sabka answer -1 maan lo
    }
    
    // Step 1: nums2 pe Monotonic Stack chalao
    for (int i = 0; i < nums2Size; i++) {
        while (top != -1 && nums2[stack[top]] < nums2[i]) {
            hashmap[nums2[stack[top]]] = nums2[i];   // value ke against answer store kar
            top = top - 1;
        }
        top = top + 1;
        stack[top] = i;
    }
    
    // Step 2: nums1 ke har element ka answer hashmap se utha lo
    int* result = (int*) malloc(nums1Size * sizeof(int));
    *returnSize = nums1Size;
    
    for (int i = 0; i < nums1Size; i++) {
        result[i] = hashmap[nums1[i]];
    }
    
    return result;
}