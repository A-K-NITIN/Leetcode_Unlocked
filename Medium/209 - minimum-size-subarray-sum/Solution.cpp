class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int i=0,j=0,n=nums.size(),ans=-1,sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=t&&i<=j&&i<n){
                if(sum>=t&&(ans>j-i||ans==-1))
                    ans=j-i;
                sum-=nums[i];
                ++i;
            }
            ++j;
        }
        return ans+1;
    }
};