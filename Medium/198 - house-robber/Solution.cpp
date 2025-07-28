class Solution {
public:
    int rob(vector<int>& num) {
        int n=num.size();
        if(n<2)
         return (n==1)?num[0]:max(num[1],num[0]);
        int a=num[0],s=max(num[1],a);
        for(int i=2;i<n;i++){
            int f=a+num[i];
            a=s;
            s=max(s,f);
        }
        return s;
    }
};