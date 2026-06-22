class Solution {
public:
    int maxNumberOfBalloons(string text) {
       int b=0,a=0,l2=0,o2=0,n=0;
       for(auto s:text){
        if(s=='b')
            b++;
        else if(s=='a')
            a++; 
        else if(s=='l')
            l2++; 
        else if(s=='o')
            o2++; 
        else if(s=='n')
            n++; 
       }
       return min({b,a,l2/2,o2/2,n});
    }
};