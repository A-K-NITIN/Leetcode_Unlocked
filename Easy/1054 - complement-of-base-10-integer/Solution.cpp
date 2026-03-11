class Solution {
public:
    int bitwiseComplement(int n) {

        if(n==0)
            return 1;
        bool f=0;
        for(int i=31;i>=0;i--){
            if(n&(1<<i)){
                f=1;
                n^=(1<<i);
            }
            else if(f)
                n^=(1<<i);
        }
        return n;
    }
};