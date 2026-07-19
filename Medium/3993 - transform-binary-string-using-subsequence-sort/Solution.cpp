class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& str) {
        int n=str.size(),l=s.size();
        vector<bool>ans;
        int s1,s0;
        s1=s0=0;
        for(auto i:s){
            if(i=='1')
                ++s1;
            else
                ++s0;
        }
        int t1,t0;
        
        for(int i=0;i<n;++i){
            t1=t0=0;
            string tem=s;
            bool f=1;
            for(int j =0;j<l;j++){
                if(str[i][j]=='1'){
                    ++t1;
                    if(tem[j]!='1'){
                        int k=j-1;
                        while(k>=0&&!(tem[k]=='1'&&(str[i][k]=='0'||str[i][k]=='?')))--k;
                        cout<<k<<"   "<<j<<endl;
                        if(k==-1){
                            f=0;
                            break;
                        }
                        tem[k]='2';
                        
                    }
                }
                else if(str[i][j]=='0'){
                    ++t0;
                    if(tem[j]!='0'){
                    int k=j+1;
                        while(k<l&&tem[k]!='0')++k;
                        if(k==l){
                            f=0;
                            break;
                        }
                        tem[k]='2';
                    }
                }
                
            }
            if(f)
            ans.push_back((t1<=s1&&t0<=s0));
            
            else
            ans.push_back(false);    
        }
        return ans;
    }
};