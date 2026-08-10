class Solution {
public:
    void back(int n,int& c){
        if(n==0)
            return;
        ++c;
        int t= (int)sqrt(n*1.0);
        back(n-(t*t),c);
    }
    bool winnerSquareGame(int n) {
        int c=0;
        back(n,c);
        return c%2;
    }
};