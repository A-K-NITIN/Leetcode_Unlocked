class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
    /*//bruout force (O(n log n))
        sort(nums.begin(),nums.end());
        return max(nums[0]*nums[1]*nums[n-1],nums[n-3]*nums[n-2]*nums[n-1]);
    */
    //optimized
    if(nums[0]>nums[n-1]){
        nums[0]^=nums[n-1];
        nums[n-1]^=nums[0];
        nums[0]^=nums[n-1];
    }
    for(int i=1;i<n-1;++i){
        if(nums[0]>nums[i]){
        nums[0]^=nums[i];
        nums[i]^=nums[0];
        nums[0]^=nums[i];
        } 
        if(nums[1]>nums[i]){
        nums[1]^=nums[i];
        nums[i]^=nums[1];
        nums[1]^=nums[i];
        } 
        if(nums[n-1]<nums[i]){
        nums[n-1]^=nums[i];
        nums[i]^=nums[n-1];
        nums[n-1]^=nums[i];
        } 
        if(nums[n-2]<nums[i]){
        nums[n-2]^=nums[i];
        nums[i]^=nums[n-2];
        nums[n-2]^=nums[i];
        } 
        if(!(n-3==1&&nums[n-3]<0&&nums[1]<0)&&nums[n-3]<nums[i]){
        nums[n-3]^=nums[i];
        nums[i]^=nums[n-3];
        nums[n-3]^=nums[i];
        } 
        
    }
 
    return ((nums[0]*nums[1]*nums[n-1]>nums[n-3]*nums[n-2]*nums[n-1])?nums[0]*nums[1]*nums[n-1]:nums[n-3]*nums[n-2]*nums[n-1]);
    }
};