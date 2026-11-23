// Pushed: 2026-11-23 12:38:48 UTC
// Difficulty: Medium
// Runtime: 1 ms
// Memory: 8.9 MB

class Solution {
public:
    void swap(int& a, int& b,int& c){
        int s=a+b+c,m=min({a,b,c}),x=max({a,b,c});
        a=m;
        c=x;
        b=s-(a+c);
    }
    int minRange(int a, int b, int c) {
        swap(a,b,c);
        return (c-a>b?b:c-a);
    }
};