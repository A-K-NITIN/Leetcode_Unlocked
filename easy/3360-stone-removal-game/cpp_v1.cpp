// Pushed: 2026-11-26 09:38:35 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 7.8 MB

class Solution {
public:
    bool canAliceWin(int n) {
        for(int i=10;i>=1;--i){
            n-=i;
            if(n<0&i%2==1)
                return true;
            else if(n<0&&i%2==0)
                return false;
        }
        return false;
    }
};