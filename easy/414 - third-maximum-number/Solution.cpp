class Solution {
public:
    int thirdMax(vector<int>& nm) {
        set<int>m(nm.begin(),nm.end());
        vector<int>n(m.begin(),m.end());
        int l=n.size();
       for(int i=1;i<=3;i++)
        for(int j=0;j<l-i;j++)
            if(n[j]>n[j+1])
                swap(n[j],n[j+1]);
            
        
       
       return (l>=3)?n[l-3]:n[l-1];
    }
};