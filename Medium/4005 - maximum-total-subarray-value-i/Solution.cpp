class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int min=nums[0],max=min;
        for(auto i: nums){
            if(i>max)
                max=i;
            if(i<min)
                min=i;
        }
        return (long long ) k*(max-min);
    }
};