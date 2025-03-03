int missingNumber(int* nums, int numsSize) {
    for( unsigned short int i=0;i<=numsSize;i++){
        bool f=1;
        for(unsigned short int j=0;j<numsSize;j++){
             if(nums[j]==i){
                f=0;
                break;
             }
        }
        if(f)
         return i;
    }
    return -1;
}