#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void threeSum(int* nums, int n) {
    qsort(nums, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++) {

        // Skip duplicate nums[i]
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                printf("[%d, %d, %d]\n", nums[i], nums[left], nums[right]);

                // Skip duplicates for left & right
                int lastLeft = nums[left];
                int lastRight = nums[right];

                while (left < right && nums[left] == lastLeft) left++;
                while (left < right && nums[right] == lastRight) right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
}

int main() {
    int nums[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Unique Triplets:\n");
    threeSum(nums, n);

    return 0;
}
