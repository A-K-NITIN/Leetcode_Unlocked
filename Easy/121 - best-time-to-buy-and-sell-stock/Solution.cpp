class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int min=pr[0],max=-1,p=0;
        int n=pr.size();
        for(int i=1;i<n;++i){
            if(min>pr[i]){
                min=pr[i];
                max=-1;
            }
            if(max<pr[i])
                max=pr[i];
            if(max-min>p)
                p=max-min;
        }
        return p;
    }
};