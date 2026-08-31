def subarray_sum(arr, target):
    prefix_sum = 0
    count = 0
    seen = {0: 1}    
    
    for i in range(len(arr)):
        prefix_sum += arr[i]             
        need = prefix_sum - target             
        if need in seen:
            count += seen[need]            
        seen[prefix_sum] = seen.get(prefix_sum, 0) + 1  
    
    return count

arr = [1, 2, 3, -2, 5]
target = 3
print(subarray_sum(arr, target))