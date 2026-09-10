class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size(),k=n/2;
        for(int i=0;i<n;i++){
            if(k!=i&&nums[i]==nums[k])
                return false;
        }
        return true;
    }
};