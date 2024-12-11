int singleNumber(int* nums, int numsSize) {
    
  
    while(numsSize>1){
    numsSize--;
       nums[0]^=nums[numsSize];
}   
       
    return nums[0];
}
