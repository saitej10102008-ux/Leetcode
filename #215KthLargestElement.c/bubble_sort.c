
int findKthLargest(int* nums, int numsSize, int k)
{
    int big = 0;
    int temp = 0;
    int kthlargest = 0;

    for (int j = 0; j < numsSize - 1; j++)
    {
        for (int i = 0; i < numsSize - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }
    }

    kthlargest = nums[k - 1];
    return kthlargest;
}
