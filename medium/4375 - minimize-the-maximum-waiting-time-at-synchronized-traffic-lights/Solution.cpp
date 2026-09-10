class Solution {
public:
    int minPenalty(int p, vector<int>& l, vector<int>& at) {
        int n=at.size();
        for(int i=0;i<n;++i)at[i]%=p;
        int m=-1;
        for(auto i : l)m=max(m,i);
        int mm=0;
        for(int i=0;i<n;++i){
            if(at[i]>=m)
                mm=max(mm,(p-at[i]));
                
        }
       return mm; 
    }
};