int minimumOperations(int* nums, int numsSize) {
    int a;
    numsSize--;
    for(;numsSize>=0;numsSize--)
     a=((nums[numsSize]%3==1)||(nums[numsSize]%3==2))?a+1:a;
    return a;
}