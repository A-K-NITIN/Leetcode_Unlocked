class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        bool c=1;
        for(int i=0;i<n-k+1;++i){
            c=1;
            for(int j=1;j<k;++j){
                if(nums[i+j-1]+1!=nums[i+j]){
                    c=0;
                    break;
                }
            }
            if(c)
                ans.push_back(nums[i+k-1]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};