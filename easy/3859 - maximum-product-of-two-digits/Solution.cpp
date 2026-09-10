class Solution {
public:
    int maxProduct(int n) {
        int max=-1,max2=-1;
        while(n!=0){
            if(n%10>=max){
                max2=max;
                max=n%10;
            }
            else if(n%10>=max2){
                max2=n%10;
            }
            n/=10;
        }
        return max*max2;
    }
};