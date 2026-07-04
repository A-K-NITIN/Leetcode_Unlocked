class Solution {
public:
    int minOperations(string s1, string s2) {
        int n=s1.size(),c=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='0'&&s2[i]=='1')c++;
            else if(s2[i]=='0'&&s1[i]=='1'){
                if(i+1<n&&s1[i+1]=='1'){
                    c++;
                    s1[i]='0';
                    s1[i+1]='0';
                }
                else if(i>0&&s1[i-1]=='1'){
                    c++;
                    s1[i]='0';
                    s1[i-1]='0';
                    i-=2;
                }
                else if(i+1<n&&s1[i+1]=='0')c+=2;
                else if(i>0&&s1[i-1]=='0')c+=2;
                else return -1;
                
            }
                
        }
        return c;
    }
};