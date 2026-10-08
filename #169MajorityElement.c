int majorityElement(int* nums, int numsSize)
{ 
    int majorityElement = nums [0]; 
    int count = 0;  

    for (int i=0; i<numsSize; i++) { 
        if (count == 0) { 
            majorityElement = nums[i];
        } 
        if (majorityElement == nums[i]) { 
            count++;
        }
        else { 
            count--;
        } 
    } 
    return majorityElement;
 

}
