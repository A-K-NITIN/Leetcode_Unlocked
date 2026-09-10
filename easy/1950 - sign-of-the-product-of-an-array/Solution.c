int arraySign(int* nums, int numsSize) {
    numsSize--;
    unsigned short int n=0;
    while(numsSize!=-1){
        if(nums[numsSize]==0)
          return 0;
        else if(nums[numsSize]<0)
          n++;
        numsSize--;
    }
    return (n%2)?-1:1;
}