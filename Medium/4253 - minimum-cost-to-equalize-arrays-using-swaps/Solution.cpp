class Solution {
public:
    int minCost(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        if(n1==n2)
            return 0;
        map<int,int>t1,t2,t3;
        for(auto i:n1)t1[i]++;
        for(auto i:n2)t2[i]++;
        int ans=0;
         for(auto[i,j]:t1)t3[j]++;
         for(auto[i,j]:t2)t3[j]++;
        t1.clear();
        t2.clear();
         for(auto[i,j]:t3){
             cout<<j<<"  "<<i<<endl;
             if(j%2==0&&i>1)
                 ans+=(j/2);
             else 
                 return -1;
         }
        return ans;
        
    }
};