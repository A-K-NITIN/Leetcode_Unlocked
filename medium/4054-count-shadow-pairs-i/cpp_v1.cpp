// Pushed: 2026-09-16 03:51:33 UTC
// Difficulty: Medium
// Runtime: 274 ms
// Memory: 303.3 MB

class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        deque<int>ss;
        int n=nums.size();
        unordered_map<int,int>mp;
        long long int c=0;
        for(int i=0;i<n;++i){
            while(!ss.empty()&&nums[i]<nums[ss.back()]){ 
                c+=(i-ss.back()-mp[nums[ss.back()]]);
                
               --mp[nums[ss.back()]];
                ss.pop_back();
            }
            ss.push_back(i);
            ++mp[nums[i]];
        }
        while(!ss.empty()){
                c+=(n-ss.back()-mp[nums[ss.back()]]);
             --mp[nums[ss.back()]];
                ss.pop_back();
               
            }
        return c;
    }
};