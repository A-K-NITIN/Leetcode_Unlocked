class Solution {
public:
    string convert(string s, int k) {
        int n=s.size();
        if(k+k-2==0)
            return s;
        string ans="";
        for(int i=0;i<k;i++){
            for(int j=i;j<n;j+=(k+k-2)){
                ans+=s[j];
                if(i>0&&i<k-1&&(j+(k+k-2)-(i*2))<n)
                ans+=s[j+(k+k-2)-(i*2)];
            }
        }
        return ans;
    }
};