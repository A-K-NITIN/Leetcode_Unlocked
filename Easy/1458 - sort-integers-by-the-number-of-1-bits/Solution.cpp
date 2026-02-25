class Solution {
public:
    // int hash(int n){
    //     int c=0;
    //     int d=1;
    //     while(d<=n){
    //         if(d&n)
    //           c++;
    //         d*=2;
    //     }
    //     return c;
    // }
    int hash(int n){
        int c=0;
        while(n){
              c++;
            n&=(n-1);
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
       
        map<int,vector<int>> anss;
        for(auto i :arr)
            anss[hash(i)].push_back(i);
         vector<int> ans;
        for(auto &[key,vec]:anss){
            sort(vec.begin(),vec.end());
             ans.insert(ans.end(),vec.begin(),vec.end());
        }    
        return ans;
    }
};