class Solution {
public:
vector<vector<int>> ans;
vector<int> curr;

void backtrack(vector<int>& nums,int n,int start){
    ans.push_back(curr);

    for(int i=start; i<n;i++){
    curr.push_back(nums[i]);

    backtrack(nums,n ,i+1);
    curr.pop_back();
}
}
vector<vector<int>> subsets(vector<int>& nums) {
    int n=nums.size();
        backtrack(nums,n,0);
        return ans;
}  
};