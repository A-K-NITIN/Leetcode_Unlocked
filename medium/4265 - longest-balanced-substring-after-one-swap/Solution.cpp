class Solution {
public:
    int longestBalanced(string s) {
        int o=0,z=0;
        for(auto i :s){
            if(i=='1')
                o++;
            else
                z++;
        }
        return 2*min(o,z);
    }
};