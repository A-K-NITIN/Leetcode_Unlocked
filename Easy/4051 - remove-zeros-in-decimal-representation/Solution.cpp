class Solution {
public:
    long long removeZeros(long long n) {
        long long int tem=0;
        while(n!=0){
            if(n%10)
                tem=(tem*10)+(n%10);
            n/=10;
        }
        n=tem;
        tem=0;
         while(n!=0){
            tem=(tem*10)+(n%10);
            n/=10;
        }
        return tem;
    }
};