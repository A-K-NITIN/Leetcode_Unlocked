class Solution {
public:
    int minFlips(int a, int b, int c) {
        int o=(a|b),ss=0;
        for(int i=0;i<32;i++){
            if((o&1<<i)!=(c&1<<i)){
                if(c&1<<i)
                    ss++;
                else
                    ss+=((a&1<<i)+(b&1<<i))/(1<<i);
                
            }
        }
        return ss;
    }
};