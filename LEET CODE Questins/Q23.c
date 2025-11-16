#include <stdio.h>

double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) {
    // Ensure nums1 is smaller
    if (m > n) 
        return findMedianSortedArrays(nums2, n, nums1, m);

    int low = 0, high = m;

    while (low <= high) {
        int cut1 = (low + high) / 2;
        int cut2 = (m + n + 1) / 2 - cut1;

        int L1 = (cut1 == 0) ? -1000000000 : nums1[cut1 - 1];
        int L2 = (cut2 == 0) ? -1000000000 : nums2[cut2 - 1];
        int R1 = (cut1 == m) ? 1000000000 : nums1[cut1];
        int R2 = (cut2 == n) ? 1000000000 : nums2[cut2];

        // Valid partition
        if (L1 <= R2 && L2 <= R1) {
            if ((m + n) % 2 == 0)
                return ( (double)( (L1 > L2 ? L1 : L2) + (R1 < R2 ? R1 : R2) ) ) / 2.0;
            else
                return (double)(L1 > L2 ? L1 : L2);
        }
        // Move left
        else if (L1 > R2) {
            high = cut1 - 1;
        }
        // Move right
        else {
            low = cut1 + 1;
        }
    }

    return 0.0;
}

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2};

    double result = findMedianSortedArrays(nums1, 2, nums2, 1);
    printf("Median = %.2f\n", result);

    return 0;
}
