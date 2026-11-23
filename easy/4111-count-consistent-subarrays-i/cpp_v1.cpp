// Pushed: 2026-11-23 12:40:21 UTC
// Difficulty: Easy
// Runtime: 1 ms
// Memory: 30.1 MB

class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size(),ans=n,m,t=0;
        for(int i=0;i<n;++i){
            m=t=nums[i];
            for(int j=i+1;j<n;++j){
                m=min(m,nums[j]);
                t&=nums[j];
                if(t==m)
                    ++ans;
            }
        }
        return ans;
    }
};