class Solution {
public:
    void dfs(int c, int i,int &ans,unsigned long long int w,int n,  vector<vector<pair<int,int>>>& gra, string l, int k,vector<bool> &vis){
        if(i==n-1){
            if(w<ans)
                ans=w;
            return;
        }
        if(w>=ans)
            return;
        if(gra[i].empty())
            return;
        for(auto f:gra[i]){
            int t=f.first,ct=0;
            if(vis[t]==true)
                continue;
            if(l[t]==l[i])
                ct=c+1;
            if(ct>k)
                continue;
            vis[t]=true;
            dfs(ct,t,ans,w+f.second,n, gra,l,k,vis);
             vis[t]=false;
        }
    }
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>> gra(n);
        vector<bool> vis(n,false);
        for(auto i:edges)gra[i[0]].push_back({i[1],i[2]});
        int ans=INT_MAX;
        vis[0]=true;
         dfs(1,0,ans,0,n, gra,labels,k,vis);
        return ((ans==INT_MAX)?-1:ans);
    }
};