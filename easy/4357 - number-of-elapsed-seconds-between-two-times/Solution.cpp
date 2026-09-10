class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int tem1=0,tem2=0,m=3600,s1=0,s2=0;
        for(int i=0;i<=8;i++){
            if(i==8||s[i]==':'){
                s1+=tem1*m;
                s2+=tem2*m;
                m/=60;
                tem1=tem2=0;
                continue;
            }
                tem1=tem1*10+(s[i]-'0');
                tem2=tem2*10+(e[i]-'0');   
        }
        return s2-s1;
    }
};