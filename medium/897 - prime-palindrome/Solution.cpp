class Solution {
public:
    bool isprime(int n){
        if(n<=1)
         return false;
        if(n==2)
            return true;
        if(n%2==0)
            return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)
                return false;
        }
        return true;
    }
    bool ispal(int n,int &c){
        int tem=n,p=0;
        while(tem!=0){
            p=(p*10)+(tem%10);
            tem/=10;
            c++;
        }
        return (p==n);
    }

    int primePalindrome(int n){
        while(n!=INT_MAX){
            int c=0;
            
            if(ispal(n,c)&&isprime(n))
                return n;
            cout<<n<<"  "<<c<<"  "<<isprime(n)<<endl;
            if(c%2==0&&n>11){
                n=pow(10,c);
            }
            n++;
        }
            return 0;
    }
};