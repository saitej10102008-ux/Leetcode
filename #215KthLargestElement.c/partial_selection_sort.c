
int findKthLargest(int* nums, int numsSize, int k)
{
    int maxIndex = 0;
    int temp = 0;
    int m = 0;
    int dup;

    dup = k;

    while (k != 0)
    {
        maxIndex = m;

        for (int i = m + 1; i < numsSize; i++)
        {
            maxIndex = (nums[i] >= nums[maxIndex]) ? i : maxIndex;
        }

        temp = nums[m];
        nums[m] = nums[maxIndex];
        nums[maxIndex] = temp;

        m++;
        k--;
    }

    return nums[dup - 1];
}
