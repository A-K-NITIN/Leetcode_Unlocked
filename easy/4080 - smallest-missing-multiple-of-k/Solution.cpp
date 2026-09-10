class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
       vector<int> has;
       for(int i=0;i<n;++i) {
            if(nums[i]%k==0)
                has.push_back(nums[i]/k);
       }
       sort(has.begin(),has.end());
       has.erase(unique(has.begin(),has.end()),has.end());
       for(int i=0;i<has.size();++i){
        if(i+1<has[i])
            return (i+1)*k;
       }
       return (has.size()+1)*k;
    }
};