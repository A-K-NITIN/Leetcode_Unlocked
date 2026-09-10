class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),ans=0;
       for(int i=0;i<32;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(nums[j]&(1<<i))
                c++;
        }
        if(c>(n/2))
            ans+=1<<i;
       }
        return ans;
    }
};