class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(m.find(t-nums[i])!=m.end()){
                return {m[t-nums[i]],i};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};