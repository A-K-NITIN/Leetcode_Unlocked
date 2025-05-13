class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
       vector<int>v;
       sort(n.begin(),n.end());
       for(int i=0,s=1;i<n.size();i++,s++){
        if(s!=n[i])
            v.push_back(s);
       }
       return v;
    }
};