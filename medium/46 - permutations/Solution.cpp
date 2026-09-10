class Solution {
public:
    vector<vector<int>> sol;
    void backtrack(vector<int>& nums,int n,int index){
        if(index==n-1){
            sol.push_back(nums);
            return;
        }
        for(int i=index;i<n;i++){
            swap(nums[i],nums[index]);
            backtrack(nums,n,index+1);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        backtrack(nums,n,0);
       return sol; 
    }
};