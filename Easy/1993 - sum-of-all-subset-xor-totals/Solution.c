int subsetXORSum(int* nums, int numsSize) {
    int a=0;
     for(int i=0;i< numsSize;i++){
        a+=nums[i];
        for(int j=i;j< numsSize;j++){
            a+=nums[i]^nums[j];
        }
     }
     return a;
}