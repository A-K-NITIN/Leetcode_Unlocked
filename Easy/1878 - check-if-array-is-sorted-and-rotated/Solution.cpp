class Solution {
public:
    bool check(vector<int>& nums) {
        bool f=false;
        int n=nums.size();
        int max;
        for(int i=0;i<n;++i){
            if(!f&&i+1<n&&nums[i]>nums[i+1]){
                f=true;
                max=nums[i];
            }
            else if(f&&((i+1<n&&nums[i]>nums[i+1])||max<nums[i]))
                return false;
        }
        return (f&&nums[n-1]>nums[0])?false:true;
    }
};