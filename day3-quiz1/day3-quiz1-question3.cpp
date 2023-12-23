#include <stdio.h>

int maxSum(int* nums, int numsSize) {
    int largestSum = nums[0];
    int Sum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (Sum + nums[i] > nums[i]) {
            Sum += nums[i];
        } else {
            Sum = nums[i];
        }

        if (Sum > largestSum) {
            largestSum = Sum;
        }
    }

    return largestSum;
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int nums[100];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int result = maxSum(nums, size);
    printf("%d", result);

    return 0;
}

