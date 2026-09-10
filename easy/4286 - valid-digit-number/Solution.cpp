class Solution {
public:
    bool validDigit(int n, int x) {
        bool f=false;
        while(n>9){
           f=f||(n%10==x);
            n/=10;
        }
        if(n==x)
            return false ;
        return f;
    }
};