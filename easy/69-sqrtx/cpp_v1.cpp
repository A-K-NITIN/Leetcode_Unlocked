// Pushed: 2026-09-16 10:35:07 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 8.6 MB

class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
            return x;
        int s=1,e=x;
        unsigned long long int mid;
        while(s<e){
            mid=s+(e-s+1)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                e=mid-1;
            else 
                s=mid;
        }
        return s;
    }
};