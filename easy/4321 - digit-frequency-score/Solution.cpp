class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>ans;
        while(n!=0){
            ans[n%10]++;
            n/=10;
        }
        int sum=0;
        for(auto [i,j]:ans){
            sum+=i*j;
        }
        return sum;
    }
};