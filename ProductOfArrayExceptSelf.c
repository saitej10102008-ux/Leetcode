    int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *output = malloc(numsSize * sizeof(int));

    int product = 1;

    // Prefix products
    for (int i = 0; i < numsSize; i++) {
        output[i] = product;
        product *= nums[i];
    }

    int suffix = 1;

    // Suffix products
    for (int i = numsSize - 1; i >= 0; i--) {
        output[i] *= suffix;
        suffix *= nums[i];
    }

    *returnSize = numsSize;
    return output;
}
