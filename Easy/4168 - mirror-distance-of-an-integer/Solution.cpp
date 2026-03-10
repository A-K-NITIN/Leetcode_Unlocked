class Solution {
public:
    int mirrorDistance(int n) {
        int r=0,tem=n;
        while(tem!=0){
            r=r*10+tem%10;
            tem/=10;
        }
        return abs(r-n);
    }
};