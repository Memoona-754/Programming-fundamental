#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int n, int* returnSize) {
    *returnSize = n;
    int* answer = (int*)malloc(n * sizeof(int));

    // Pass 1: prefix products
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Pass 2: suffix products
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    return answer;
}

int main() {
    int nums[] = {1,2,3,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int size;

    int* result = productExceptSelf(nums, n, &size);

    printf("Output: ");
    for (int i = 0; i < size; i++)
        printf("%d ", result[i]);
    printf("\n");

    free(result);
    return 0;
}
