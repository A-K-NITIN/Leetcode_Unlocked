int majorityElement(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    { 
        if(nums[i]==1)
          continue;
        int c=0;
       for(int j=i+1;j<numsSize;j++){
        if(nums[i]==nums[j])
           c++;
       }
       if(c>=numsSize/2)
         return nums[i];
    }
    return 1;
}