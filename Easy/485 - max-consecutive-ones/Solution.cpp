class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,tem=0;

        for(auto i:nums){
            if(i==1)
            tem++;
            else
                tem=0;
            ans=max(tem,ans);
        }
        return ans;
    }
};