int search(int* nums, int numsSize, int target) {
    while(numsSize--!=0){
        if(nums[numsSize]==target)
           return numsSize;
    }
    return numsSize;
}