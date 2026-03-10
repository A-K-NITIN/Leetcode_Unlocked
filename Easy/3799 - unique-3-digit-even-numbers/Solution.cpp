class Solution {
public:
    int fac(int n){
        if(n<=1)
            return 1;
        int v=1;
        while(n>1){
            v*=n;
            n--;
        }
        return v;
    }
    int totalNumbers(vector<int>& d) {
        unordered_map<int,int> m;
        for(auto i :d)
                m[i]++;

long int ans = (d.size()-1-m[0] )* (d.size()-2) *(m[2]+m[4]+m[6]+m[8])+((d.size()-m[0])* (d.size()-2) *m[0]);
        for(auto [i,j] :m)
            ans/=fac(j);
        
        return ans;
    }
};