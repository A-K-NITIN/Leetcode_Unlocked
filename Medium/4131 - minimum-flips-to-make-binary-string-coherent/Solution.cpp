class Solution {
public:
    int minFlips(string s) {
        int o=0,z=0;
        for(auto i:s){
            if(i=='1')
                o++;
            else 
                z++;
        }
        int ans=0;
        if(o<=z)
            ans=o-1;
        else
            ans=z;
        return (ans<0)?0:ans;
    }
};