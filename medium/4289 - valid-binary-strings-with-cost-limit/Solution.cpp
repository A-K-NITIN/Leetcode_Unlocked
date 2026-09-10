class Solution {
public:
    
    void back(int n,int c,int i,int k,string s,vector<string>&ans){
       if(i==(n-1))
           return;
            for(int j=i+2;j<=k&&j<n;j++){
                if(c+j>k)
                    break;
                s[j]='1';
                 cout<<c<<"  "<<i<<"  "<<s<<endl;
                ans.push_back(s);
                back(n,c+j,j,k,s,ans);
                s[j]='0';
            }
        
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string>ans;
        string s(n,'0');
        ans.push_back(s);
        back(n,0,-2,k,s,ans);
        return ans;
    }
};