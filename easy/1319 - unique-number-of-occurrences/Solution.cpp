class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>frq;
        for(auto i:arr)frq[i]++;
         unordered_map<int,int>frq2;
         for(auto [k,v]:frq){
            frq2[v]++;
            if(frq2[v]>1)
                return false;
            }
        return true;
    }
};