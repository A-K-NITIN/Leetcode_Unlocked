class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    
         sort(nums.begin(),nums.end()) ;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(nums[i-1]!=i)
                return {nums[i-1],i};
            
        }
        return {-1,-1};
    }
};