class Solution {
public:
    int dominantIndices(vector<int>& nums) {
      long int n=0;
        int l=nums.size(),count=0;
        for(auto a:nums){
            n+=a;
        }
        for(int i=0;i<l-1;i++){
            n-=nums[i];
            if(nums[i]>(n/(l-1-i))){
                count++;
            }
        }
        return count;
    }
};