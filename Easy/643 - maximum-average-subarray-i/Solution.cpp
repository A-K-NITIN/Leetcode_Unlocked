class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,max;
        for(int i=0;i<k;i++)sum+=nums[i];
        max=sum/k;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            max=(max<sum/k)?sum/k:max;
        }
        return max;
    }
};