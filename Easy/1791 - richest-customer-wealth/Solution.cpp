class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int s=-1;
        for(auto i:a){
            int t=0;
            for(auto j:i){
                 t+=j;
            }
            s=(s<t)?t:s;
        }
        return s;
    }
};