class Solution {
public:
    int myAtoi(string s) {
       long int sin=1,ans=0,i=0,f=1;
        while(s[i]){
            if((i==0||s[i-1]==' ')&&s[i]=='-'){
            f=0;
            sin=-1;
            i++;
            continue;
            }
            else if((i==0||s[i-1]==' ')&&s[i]=='+'){
            f=0;
            i++;
            continue;
            }
            if(s[i]>='0'&&s[i]<='9'){
            ans=(ans*10)+((int)s[i]-48);
            f=0;
                 if((sin*ans)>=INT_MAX)
                     return INT_MAX;
                if((sin*ans)<=INT_MIN)
                    return INT_MIN;
            }
            else{
                if(!(s[i]==' '&&f)){
                     cout<<ans<<" "<<i<<" |"<<s[i]<<"|   "<<((int)s[i])<<endl;
                    break;
                }
            }
            i++;
        }
        return sin*ans;
    }
};