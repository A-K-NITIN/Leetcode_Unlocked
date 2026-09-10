class Solution {
public:
    int maxSubArray(vector<int>& num) {
        int s=num[0],t=0,n=num.size();
        for(int i=0;i<n;i++){
            t+=num[i];
            if(t>s)
              s=t;
             if(t<0)
             t=0;
        }
        return s;
    }
};