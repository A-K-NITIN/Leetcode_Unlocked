class Solution {
public:
    bool closeStrings(string w1, string w2) {
        map<char,int>t1,t2;
        for(auto i:w1)t1[i]++;
        for(auto i:w2)t2[i]++;
        map<int,int>f;
        for(auto[i,j]:t1)f[j]++;
        for(auto[i,j]:t2)f[j]--;
        for(auto[i,j]:f){
            if(j!=0)
            return false;
        }
         return true;
        
    }
};