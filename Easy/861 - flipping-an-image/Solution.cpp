class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& im) {
        for(auto& i:im)
           reverse(i.begin(),i.end());
        for(auto&i:im)
           for(auto& j:i)
              j=(j)?0:1;
        return im;
    }
};