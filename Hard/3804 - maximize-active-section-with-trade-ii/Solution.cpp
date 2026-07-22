class Solution {
public:
    int back(string s) {
        s='1'+s+'1';
        int n=s.size();
        int max=-1,tem=-1,j=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'&&tem!=-1){
                ++tem;
            }
            if(s[i]=='0'){
                if(tem>max){
                    max=tem;
                }
                tem=0;
            }
        }
        if(max!=-1){
            max=-1;
            tem=0;
            j=-1;
            int ind=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    ++tem;
                    if(j==1||j==2){
                        if(j==1)
                            ind=i;
                        j=2;
                    }
                    else
                        j=0;
                }
                else{
                    if(j==0||j==1)
                       j=1;
                    
                    else if(j==2){
                        if(max<tem)
                            max=tem;

                        tem=1;
                        i=ind;
                        j=0;
                    }
                }
            }
        }
        return ((max!=-1)?max:0);
    }
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& q) {
        int n=q.size();
        vector<int>ans(n);
        int o=0;
        for(auto i:s){
                if(i=='1')
                    ++o;
            }
        for(int i=0;i<n;i++){
            //cout<<q[i][0]<<"   "<<(q[i][1]-q[i][0])<<"   "<<s.substr(q[i][0],(q[i][1]-q[i][0]))<<"  ";
            ans[i]=o+back(s.substr(q[i][0],(q[i][1]-q[i][0]+1)));
        }
        return ans;
    }
};


