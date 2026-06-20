class Solution {
public:
     long long ans(int i,int n, vector<vector<int>>& tree, vector<int>& b){
         if(tree[i].empty())
             return b[i];
        unsigned long long int max =0,min=ULLONG_MAX;
        for(auto k:tree[i]){
            unsigned long long int tem=ans(k,n,tree,b);
            if(tem<=min)
                min=tem;
            if(max<=tem)
                max=tem;
        } 

         return(long long) (max-min)+max+b[i];
    }
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>> tree(n);
        for(auto i :edges)tree[i[0]].push_back(i[1]);
        return ans(0,n,tree,baseTime);
    }
};