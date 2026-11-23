// Pushed: 2026-11-23 12:38:15 UTC
// Difficulty: Easy
// Runtime: 1 ms
// Memory: 30.8 MB

class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int c=0,n=nums.size();
        if(n==1)
            return 1;
        for(int i=0;i<n;++i){
            if(i==0&&nums[i]>=nums[i+1])
                ++c;
            else if(i-1>=0&&i+1<n&&(nums[i-1]+nums[i+1]+1)/2<=nums[i])
                ++c;
            else if(i==n-1&&nums[i]>=nums[i-1])
                ++c;
        }
        return c;
    }
};