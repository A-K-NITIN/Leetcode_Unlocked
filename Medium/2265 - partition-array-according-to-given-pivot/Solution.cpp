class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        int n=nums.size(),c=0;
        vector<int> l,g;
        for(auto i:nums){
            if(i<p)
            l.push_back(i);
            else if(i>p)
            g.push_back(i);
            else 
                c++;
        }
        for(int i=1;i<=c;i++){
            l.push_back(p);
        }
        l.insert(l.end(),g.begin(),g.end());
        return l;
    }
};