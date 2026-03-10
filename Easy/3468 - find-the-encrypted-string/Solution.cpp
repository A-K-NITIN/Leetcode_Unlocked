class Solution {
public:
    string getEncryptedString(string s, int k) {
        int l=s.size();
    k%=l;
    k=l-k;
    reverse(s.begin(),s.end());
    reverse(s.begin(),s.begin()+k);
    reverse(s.begin()+k,s.end());
    return s;
    }
};