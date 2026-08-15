class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        int ans=r[0];
        for(int i=1;i<r.size();++i){
            ans+=(abs(r[i-1]-r[i]));
        }
        return ans;
    }
};