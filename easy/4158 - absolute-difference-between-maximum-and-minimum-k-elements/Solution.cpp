class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,n=nums.size()-1;
        for(int i=0;i<k;i++)
            ans+=(nums[n-i]-nums[i]);
        return abs(ans);
    }
};