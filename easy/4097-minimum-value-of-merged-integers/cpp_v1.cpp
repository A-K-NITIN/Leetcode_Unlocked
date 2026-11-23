// Pushed: 2026-11-23 12:42:56 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 31.5 MB

class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int m=INT_MAX,tem,n=nums.size();
        for(int i=0;i<n;i+=2){
            tem=nums[i]*pow(10,(int)log10(nums[i+1])+1)+nums[i+1];
            m=min(m,tem);
        }
        return m;
    }
};