#include <stdio.h>
#include <stdlib.h>

// qsort comparison
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void fourSum(int* nums, int n, int target) {
    qsort(nums, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++) {

        // Skip duplicate nums[i]
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n; j++) {

            // Skip duplicate nums[j]
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    printf("[%d, %d, %d, %d]\n", nums[i], nums[j], nums[left], nums[right]);

                    int lastLeft = nums[left];
                    int lastRight = nums[right];

                    // Skip duplicates for left & right
                    while (left < right && nums[left] == lastLeft) left++;
                    while (left < right && nums[right] == lastRight) right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }
}

int main() {
    int nums[] = {1, 0, -1, 0, -2, 2};
    int target = 0;
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Unique Quadruplets:\n");
    fourSum(nums, n, target);

    return 0;
}
