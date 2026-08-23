class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int l, int u) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;++i){
            if(nums[i]>u){
                if(l<=u)
                ans.push_back({l,u});
                break;
            }
            if(nums[i]==l)
                ++l;
           if(nums[i]>l&&l<=u){
                ans.push_back({l,nums[i]-1});
                l=nums[i]+1;
            }
            if(i==n-1&&l<=u)
                ans.push_back({l,u});
                
        }
        return ans;
    }
};