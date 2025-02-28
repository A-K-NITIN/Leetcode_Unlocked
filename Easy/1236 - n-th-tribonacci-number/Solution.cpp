class Solution {
public:
    int tribonacci(int n) {
       long long int n0=0,n1=1,n2=1;
        for(int i=3;i<=n;i+=3)
        {
            n0+=n2+n1;
            n1+=n2+n0;
            n2+=n0+n1;
        }
        n%=3;
        return (n==0)?n0:((n==1)?n1:n2);  
     }
};