class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int one=0,n=nums.size();
            for(int j=0;j<n;j++){
                if(nums[j]&1<<i)
                    one++;
            }
            ans+=one*(n-one);
        }
        return ans;
    }
};