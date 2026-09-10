class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
       int i=0;
       while(left!=right){
            if(left==0||right==0)
                return 0;
            i++;
            left>>=1;
            right>>=1;
       }
       return left<<i;
    }
};