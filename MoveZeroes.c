void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    // Fill the remaining positions with zeros
    for (int k = j; k < numsSize; k++) {
        nums[k] = 0;
    }
}
