class Solution {
public:
    bool isprime(int n){
        if(n<2)
            return 0;
        if(n==2)
            return 1;
        if(n%2==0)
            return 0;
        for(int i=3;i*i<=n;i++){
            if(n%i==0)
                return 0;
        }
        
        return 1;
    }
    int sumOfPrimesInRange(int n) {
        int rev=0,tem=n;
        while(tem!=0){
            rev=rev*10+tem%10;
            tem/=10;
        }
        if(n>rev){
            n^=rev;
            rev^=n;
            n^=rev;
        }
        tem=0;
        for(;n<=rev;n++){
            if(isprime(n))
                tem+=n;
        }
        return tem;
    }
};