class Solution {
public:
    bool isUgly(int n) {
     while(n!=0&&(n%2==0||n%3==0||n%5==0)){
        if(n%2==0)n/=2;
        if(n%5==0)n/=5;
        if(n%3==0)n/=3;
     }
     return (n==1);
    }
};