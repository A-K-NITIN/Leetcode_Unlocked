int findDuplicate(int* nums, int numsSize) {
    for (int i=0; i<numsSize; i++) {
        for (int j=numsSize-1;j>i; j--) {
            if (nums[i] == nums[j])
                return nums[i];
        }
    }
    return -1;
}