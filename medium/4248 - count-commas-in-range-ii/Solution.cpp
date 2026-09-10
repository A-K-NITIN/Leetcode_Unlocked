class Solution {
public:
    long long countCommas(long long n) {
        unsigned long long int ans=0;
        if(n<1000)
            return 0;
        if(n>=1000)
            ans+=n-999;
        if(n>=1000000)
            ans=ans*(n/1000000)+((n%1000000)-999);
        if(n>=1000000000)
            ans=ans*(n/1000000000)+(n%1000000000)-999;
        if(n>=1000000000000)
            ans=ans*(n/1000000000000)+(n%1000000000000)-999;
        return ans;
    }
};