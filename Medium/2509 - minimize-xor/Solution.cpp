class Solution {
public:
    int count(int n){
        int c=0;
        while(n!=0){
            c++;
            n&=(n-1);
        }
        return c;
    }
    int high(int x){
        for(int i=31;i>=0;i--){
            if(x&(1<<i))
                return i;
        }
        return -1;
    }
    int minimizeXor(int num1, int num2) {
        int ans=0,max=high(num1),c1=count(num1),c2=count(num2);
        if(c2<c1){
            for(int i=max;i>=0&&c2;i--){
                if(num1&(1<<i)){
                    ans+=(1<<i);
                    c2--;
                }
            }
        }
        else if(c2>c1){
            ans=num1;
            c2-=c1;
              for(int i=0;i<32&&c2;i++){
                if(!(ans&(1<<i))){
                    ans+=(1<<i);
                    c2--;
                }
            }
        }
        else
            ans=num1;

        return ans;
    }
};