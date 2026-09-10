class Solution {
public:
    int fib(int n) {
        int a=0,s=1;
        for(int i=2;i<=n;i++){
            int d=s;
            s+=a;
            a=d;
        }
        return (n==0)?0:s;
    }
};