class Solution {
public:
    void deep(vector<vector<int>>& tree,int i,int dd,int& d){
        if(dd>d)
            d=dd;
        for(auto j : tree[i]){
            deep(tree,j,dd+1,d);
        }
    }
      void dfs(vector<vector<int>>& tree,int i, vector<int>& nums,int dd,int& d,unsigned long long int & sum){
       sum+=(unsigned long long int)nums[i] * (d - dd + 1);
        for(auto j : tree[i]){
            dfs(tree,j,nums,dd+1,d,sum);
        }
    }
    long long weightedSum(vector<int>& p, vector<int>& nums) {
        int n=p.size();
        vector<vector<int>> tree(n);
        for(int i=1;i<n;++i)tree[p[i]].push_back(i);
        int d=1;
        deep(tree,0,1,d);
        unsigned long long int sum=0;
        dfs(tree,0,nums,1,d,sum);
        return sum;
    }
};