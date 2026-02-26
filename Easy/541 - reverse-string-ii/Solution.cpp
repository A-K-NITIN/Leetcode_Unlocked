class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
     
        
        for(int j=0;j<n;j+=(2*k)){
            if((k+j)<n){
                for(int i=0;i<k/2;i++){
                    s[i+j]^=s[k-1-i+j];
                    s[k-1-i+j]^=s[i+j];
                    s[i+j]^=s[k-1-i+j];
                }
            }
            else{
                int m=n-j;
                for(int i=0;i<m/2;i++){
                    s[i+j]^=s[m-1-i+j];
                    s[m-1-i+j]^=s[i+j];
                    s[i+j]^=s[m-1-i+j];
                   
                }
            }
          
        }
        
        return s;
    }
};