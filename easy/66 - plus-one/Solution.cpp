class Solution {
public:
    vector<int> plusOne(vector<int>& hh) {
        int n=hh.size()-1;
        hh[n]+=1;
        while(n>=0&&hh[n]>9){
            hh[n]%=10;
            n--;
            if(n!=-1)
            hh[n]+=1;
            else
            hh.insert(hh.begin(),1);
        }

        return hh; 
    }
};