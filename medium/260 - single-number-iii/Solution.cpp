class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto&pair:freq){
            if(pair.second==1){
                res.push_back(pair.first);
            }
        }
        return res;
    }
};