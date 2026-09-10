class Solution {
public:
    int minOperations(string s) {
        if(s.size()<=2)
            return -1;
        string e=s,b=s,t=s;
        sort(s.begin(),s.end());
        if(t==s)
            return 0;
        sort(e.begin(),e.end()-1);
        sort(b.begin()+1,b.end());
        return ((e==s||b==s)?1:2);
    }
};