class Solution {
public:
    long long maximumValue(long long int n, long long int s, long long int m) {
        return((n==1)?s: s+(n>>1)*m-(n>>1)+1);
    }
};