class Solution {
public:
    bool vv(char a){
        a=tolower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int b=0,n=s.size(),e=n-1;
         while(b<n&&!vv(s[b]))b++;
         while(e>=0&&!vv(s[e]))e--;
        while(b<e){
           
            cout<<b<<" "<<e<<endl;
            s[b]^=s[e];
            s[e]^=s[b];
            s[b]^=s[e];
            b++;
            e--;
            while(!vv(s[b]))b++;
            while(!vv(s[e]))e--;
        }
        return s;
    }
};