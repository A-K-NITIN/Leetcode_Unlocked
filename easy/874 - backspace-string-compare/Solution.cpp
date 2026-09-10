class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=s.size(), j=s.size();
        do{
            i--;
            j--;
            while(s[i]=='#')
             i--;
            i--;
            while(t[j]=='#')
             j--;
            j--;
            if(s[i]!=t[j])
             return 0;
            
        }while(i>=0&&j>=0)
        return 1;
    }
};