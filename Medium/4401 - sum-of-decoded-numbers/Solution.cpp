class Solution {
public:
    int mod=1000000007;
     unsigned long long po( unsigned long long x,int y){
        unsigned long long p=1;
        while(y!=0){
            if(y%2==1){
                --y;
                
                p=(long long)(p%mod)*(x%mod);
            }
            
            x=(long long)(x%mod)*(x%mod);
            y/=2;
        }
        return (p%mod);
    }
    
    int sumDecoded(vector<long long>& nums) {
        unsigned long long sum=0;
        int n=nums.size();
        int w,x,y;
        string d;
        for(int i=0;i<n;++i){
            w=nums[i]%10;
            d=to_string(nums[i]/10);
            x=stoi(d.substr(0,w));
            y=stoi(d.substr(w));
            //cout<<(po(x,y)%mod)<<"\n";
            sum=(long long)(sum%mod)+(po(x,y)%mod);
        }
            
           
        return sum%mod;
    }
};