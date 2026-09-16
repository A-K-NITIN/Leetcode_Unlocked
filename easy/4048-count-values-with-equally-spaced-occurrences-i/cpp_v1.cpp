// Pushed: 2026-09-16 03:53:29 UTC
// Difficulty: Easy
// Runtime: 21 ms
// Memory: 34 MB

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            mp[nums[i]].push_back(i);
        }
        int c=0;
        for(auto [k,v]:mp){
            if(v.size()!=3)
                continue;
            if(v[1]-v[0]==v[2]-v[1])
                ++c;
        }
        return c;
    }
};