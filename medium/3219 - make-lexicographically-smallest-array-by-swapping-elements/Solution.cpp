class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int> nums, int limit) {
        int n=nums.size();
        vector<pair<int,int>> sam;
        for(int i=0;i<n-1;++i){
            sam = vector<pair<int,int>>();
            for(int j=i+1;j<n;++j){
                if(nums[i]>nums[j]&&(nums[i]-nums[j])<=limit)
                    swap(nums[i],nums[j]);
                
                else if(nums[i]>nums[j])
                    sam.push_back({nums[j],j});
                
            }
            sort(sam.begin(),sam.end());
            reverse(sam.begin(),sam.end());
            for(auto [v,p] : sam){
                if(v<nums[i]&&(nums[i]-v)<=limit)
                    swap(nums[i],nums[p]);
            }
        }
        return nums;
    }
};