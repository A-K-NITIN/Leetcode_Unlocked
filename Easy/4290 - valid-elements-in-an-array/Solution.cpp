class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,-1);
        int max=-1;
        for(int i=0;i<n;i++){
            if(max<nums[i]){
                max=nums[i];
                ans[i]=max;
            }
        }
        max=-1;
        for(int i=n-1;i>0;i--){
             if(max<nums[i]){
                max=nums[i];
                ans[i]=max;
            }
        }
        ans.erase(remove(ans.begin(),ans.end(),-1),ans.end());
        return ans;
    }
};