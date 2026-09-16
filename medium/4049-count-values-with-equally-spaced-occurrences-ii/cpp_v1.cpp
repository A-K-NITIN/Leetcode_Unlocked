// Pushed: 2026-09-16 03:53:02 UTC
// Difficulty: Medium
// Runtime: 312 ms
// Memory: 318.9 MB

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
         unordered_map<int,vector<int>>mp;
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            mp[nums[i]].push_back(i);
        }
        int c=0;
        bool f;
        for(auto [k,v]:mp){
            if(v.size()<3)
                continue;
            f=1;
            for(int j=0;j<v.size();++j){
            if(j+1<v.size()&&j+2<v.size()&&!(v[j+1]-v[j]==v[j+2]-v[j+1])){
                f=0;
                break;
            }
            }
            if(f)
                ++c;
        }
        return c;

    }
};

 