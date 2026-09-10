class Solution {
public:
    int mirrorFrequency(string s) {
        map<char,int> has;
        for(auto i:s)has[i]++;
        int ans=0;
        for(auto i =has.begin();i!=has.end();){
            if(i->first>='0'&&i->first<='9'){
                ans+=(abs(i->second-has['0'+('9'-i->first)]));
                has.erase('0'+('9'-i->first));
                i=has.erase(i); 
            }
            else{
                ans+=(abs(i->second-has['a'+('z'-i->first)]));
                has.erase('a'+('z'-i->first));
                i=has.erase(i);
                
            }
        }
        return ans;
    }
};