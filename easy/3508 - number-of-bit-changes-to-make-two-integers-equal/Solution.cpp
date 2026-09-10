class Solution {
public:
    int minChanges(int n, int k) {
        int c=0;
        while(n!=0&&n^k){
           if((n&1)==0&&(k&1)==1)
                return -1;
            if((n&1)==1&&(k&1)==0)
                 c++;
            n>>=1;
            k>>=1;
        }
        // for(int i=0;i<32;i++){
        //     if((n&1<<i)==0&&(k&1<<i))
        //         return -1;
        //     if((n&1<<i)&&(k&1<<i)==0)
        //          c++;
             
        // }
        return (k==n||k==0)?c:-1;
    }
};