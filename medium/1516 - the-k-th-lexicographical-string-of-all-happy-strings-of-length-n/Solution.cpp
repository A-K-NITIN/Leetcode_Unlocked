class Solution {
public:
    const string s="abc";
    void back(int n,int k,string r,string& res,int& c){
            if(r.size()==n){
                c++;
                if(k==c)
                res=r;
                return;
            } 
             for(int i=0;i<3;i++){
                if((r.size()>0&&r[r.size()-1]!=s[i])||r.size()==0)
                     back(n,k,r+s[i],res,c);
             }
    }
    string getHappyString(int n, int k) {
        string res="";
        int c=0;
        back(n,k,"",res,c);
        return res;
    }
};