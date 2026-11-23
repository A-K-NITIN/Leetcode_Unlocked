// Pushed: 2026-11-23 12:42:15 UTC
// Difficulty: Medium
// Runtime: 18 ms
// Memory: 21.7 MB

class Solution {
public:
    long long countValidSubstrings(string s) {
        unsigned long long int ans=0,n=s.size(),cnt=0,a=-1,b=-1,aa=-1;
  
        for(int i=0;i<n;++i){ 
            if(a==-1&&s[i]=='a')
                aa=a=i;
            else if(b==-1&&s[i]=='a')
                    aa=i;
            else if(a!=-1&&b==-1&&s[i]=='b')
                b=i;
            else if(a!=-1&&b!=-1&&s[i]=='c'){
                cnt=i-cnt;
                ans+=((cnt%2==0)?(cnt/2)*(cnt+1):cnt*((cnt+1)/2));
                cnt=i-aa-1;
                //cout<<cnt;
                ans-=((cnt%2==0)?(cnt/2)*(cnt+1):cnt*((cnt+1)/2));
                cnt=aa+1;
                i=aa;
                aa=a=b=-1;
            }
        }
        //cout<<n<<"  "<<cnt<<"  "<<ans;
        cnt=n-cnt;
        
        ans+=((cnt%2==0)?(cnt/2)*(cnt+1):cnt*((cnt+1)/2));
       
        return ans;
  
    }
};

       