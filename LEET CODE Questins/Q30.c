#include <stdio.h>
#include <stdlib.h>

int* maxSlidingWindow(int* nums, int n, int k, int* returnSize) {
    int *result = (int*)malloc((n - k + 1) * sizeof(int));
    *returnSize = 0;

    int *deque = (int*)malloc(n * sizeof(int)); // stores indices
    int front = 0, back = -1;

    for (int i = 0; i < n; i++) {

        // Remove indices that are out of this window
        if (front <= back && deque[front] < i - k + 1)
            front++;

        // Remove values smaller than nums[i] from the back
        while (front <= back && nums[deque[back]] < nums[i])
            back--;

        // Add current index
        deque[++back] = i;

        // Store the max (front of deque) after first full window
        if (i >= k - 1)
            result[(*returnSize)++] = nums[deque[front]];
    }

    free(deque);
    return result;
}

int main() {
    int nums[] = {1,3,-1,-3,5,3,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k = 3;

    int size;
    int* ans = maxSlidingWindow(nums, n, k, &size);

    printf("Sliding window maximums: ");
    for (int i = 0; i < size; i++)
        printf("%d ", ans[i]);
    printf("\n");

    free(ans);
    return 0;
}
