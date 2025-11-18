#include <stdio.h>

int* majorityElement(int* nums, int n, int* returnSize) {
    int cand1 = 0, cand2 = 0;
    int count1 = 0, count2 = 0;

    // Step 1: Find candidates
    for (int i = 0; i < n; i++) {
        int num = nums[i];

        if (num == cand1)
            count1++;
        else if (num == cand2)
            count2++;
        else if (count1 == 0) {
            cand1 = num;
            count1 = 1;
        }
        else if (count2 == 0) {
            cand2 = num;
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify counts
    count1 = count2 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == cand1) count1++;
        else if (nums[i] == cand2) count2++;
    }

    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 0;

    if (count1 > n / 3)
        result[(*returnSize)++] = cand1;
    if (count2 > n / 3)
        result[(*returnSize)++] = cand2;

    return result;
}

int main() {
    int nums[] = {1,2,2,3,2,1,1,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    int size;

    int* ans = majorityElement(nums, n, &size);

    printf("Elements occurring more than n/3 times:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", ans[i]);
    printf("\n");

    free(ans);
    return 0;
}
