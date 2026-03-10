class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int tem=0;
            for(int j=0;j<nums.size();j++){
                if(i!=j&&nums[i]>nums[j])
                    tem++;
            }
            ans.push_back(tem);
        }
        return ans;
    }
};