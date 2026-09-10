class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int i=(n-k<0)?0:n-k;
        int s=0;
        for(;i<=n+k;i++){
            cout<<i<<"  "<<n<<"  "<<(i&n)<<endl;
            if((n&i)==0)
                s+=i;
        }
        return s;
    }
};