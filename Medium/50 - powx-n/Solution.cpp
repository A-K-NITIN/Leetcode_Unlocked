class Solution {
public:
    double myPow(double x, int n) {
        if(n==0||x==1)
            return 1;
        double ans=1;
        long long int d=llabs(n);
        if(n<0)
            x=1/x;
        
        while(d>1){
            if(d&1){
                ans*=x;
                d--;
            }
            else{
            x*=x;
            d/=2;
            }
        }
        return ans*x;
    }
};