class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<4;i++){
            if((s1[i]!=s2[i]&&((i+2<4)?s1[i]!=s2[i+2]:true)&&((i-2>=0)?s1[i]!=s2[i-2]:true))||(s2[i]!=s1[i]&&((i+2<4)?s2[i]!=s1[i+2]:true)&&((i-2>=0)?s2[i]!=s1[i-2]:true)))
            return false;
        }
        return true;
    }
};