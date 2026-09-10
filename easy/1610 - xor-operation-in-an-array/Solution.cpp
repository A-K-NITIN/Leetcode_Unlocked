class Solution {
public:
    int xorOperation(int n, int s) {
       int w=0;
       while(n){
        w^=s;
        s+=2;
        n--;
       } 
       return w;
    }
};