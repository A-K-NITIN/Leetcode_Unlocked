class Solution {
public:
    long long elevatorRequests(int n, int start, vector<int>& r) {
        vector<int> small,big;
        for(int i=0;i<r.size();++i){
            if(r[i]<start)
                small.push_back(r[i]);
            else if (r[i]>start)
                big.push_back(r[i]);
        }
        sort(small.begin(),small.end());
        sort(big.begin(),big.end());
        reverse(small.begin(),small.end());
        int pp=start;
        unsigned long long int p1=0,m1=0;
        for(int i=0;i<small.size();++i){
            
            p1+=(pp-small[i]);
            m1+=p1;
            pp=small[i];
        }
        for(int i=0;i<big.size();++i){
           
            p1+=(big[i]-pp);
            m1+=p1;
            pp=big[i];
        }
        pp=start;
        unsigned long long int p2=0,m2=0;
        for(int i=0;i<big.size();++i){
            p2+=(big[i]-pp);
            m2+=p2;
            pp=big[i];
        }
        for(int i=0;i<small.size();++i){
            p2+=(pp-small[i]);
            m2+=p2;
            pp=small[i];
        }
        return ((m1<m2)?m1:m2);
    }
};