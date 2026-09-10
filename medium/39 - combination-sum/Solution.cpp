class Solution {
public:
    vector<int>ans;
    vector<vector<int>> sol;
    void backtrack(int target,int index,int n,vector<int>& candidates){
        if(target<0)
            return;
        if(target==0){
            sol.push_back(ans);
            return;
        }
        for(int i=index;i<n;i++){
            ans.push_back(candidates[i]);
            backtrack(target-candidates[i],i,n,candidates);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        backtrack(target,0,n,candidates);
        return sol;
    }
};