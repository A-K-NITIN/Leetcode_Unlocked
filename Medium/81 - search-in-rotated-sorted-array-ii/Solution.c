bool search(int* nums, int numsSize, int target) {
    numsSize--;
    while(numsSize!=-1){
        if(nums[numsSize]==target)
         return 1;
        numsSize--;
    }
    return 0;
}