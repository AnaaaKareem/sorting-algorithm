# Sorting Algorithms
## Bubble Sort
### Description 
A Bubble Sort algorithm iterates over the size of the array multiple times one of the size of the array and another loop inside used to compare each index. Comparing each index to the next index (i > i+1) in which if the condition is met it swaps the two values, if not it continues it's iteration without swapping.

### Steps
1. Start at the beginning of the array.
2. Compare the first element with the second element.
3. If the first element is greater than the second, swap them.
4. Move to the next pair (second and third elements), and repeat the comparison and swap if needed.
5. Continue this process for the entire array. After one full pass, the largest element will be at the last position.
6. Repeat steps 1–5 for the remaining unsorted part of the array (ignoring the last sorted elements), until the array is sorted.

### Time Complexity
Best Case: O(n)
Average Case: O(n^2)
Worst Case: O(n^2)

## Insetion Sort
### Description 
An Inserion Sort algorithm loops over the size of the array on each iteration picking an index as a key and assigning the previous index value into a variable. Then, A conditional loop is assigned with the condition of checking of the previous value is bigger than zero and current element is smaller than the previous element if true the current index is swapped with the previous index until the beginning and then they the first index is assign with the key stored at the beginning of the first loop.

### Steps
1. Start with the second element (index 1) as the key, because a single-element array is always sorted.
2. Compare the key to its neighbors to the left (the sorted part of the array).
3. While the left neighbor exists and is greater than the key, shift the neighbor one position to the right.
4. Insert the key into its correct position once the correct spot is found (when the left neighbor is smaller or you've reached the start).
5. Repeat steps 2–4 for each element in the array until the end.

### Time Complexity
Best Case: O(n)
Average Case: O(n^2)
Worst Case: O(n^2)