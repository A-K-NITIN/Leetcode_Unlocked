int maximumProduct(int* nums, int numsSize) {
    int ans=INT_MIN;
    for(int i=0;i<numsSize-2;i++){
        int tem=nums[i]*nums[i+1]*nums[i+2];
        ans=(tem>ans)?tem:ans;
    }
    return ans;
}