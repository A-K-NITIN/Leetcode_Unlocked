int findMin(int* nums, int numsSize) {
    numsSize--;
    while(numsSize!=0){
        if(nums[0]>nums[numsSize])
          nums[0]=nums[numsSize];
        numsSize--;
    }
    return nums[0];
}