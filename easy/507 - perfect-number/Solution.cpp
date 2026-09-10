class Solution {
public:
    bool checkPerfectNumber(int num) {
    int s=num;
    for( unsigned int i=1;i<num;i++)s=(num%i==0)?s-i:s;
    return !s;
    }
};