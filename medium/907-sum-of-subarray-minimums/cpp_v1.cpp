// Pushed: 2026-09-10 16:59:50 UTC
// Difficulty: Medium
// Runtime: 116 ms
// Memory: 193.4 MB

class Solution {
public:
    int mod=1000000007;
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        
        vector<int>larr(n,1),rarr(n,1);
        stack<int> ss;
      
        for(int i=0;i<n;++i){
            while(!ss.empty()&&arr[ss.top()]>arr[i]){
                larr[ss.top()]=i-ss.top();
                ss.pop();
            }
            ss.push(i);
        }
        while(!ss.empty()){
                larr[ss.top()]=n-ss.top();
                ss.pop();
            }
        for(int i=n-1;i>=0;--i){
            while(!ss.empty()&&arr[ss.top()]>=arr[i]){
                rarr[ss.top()]=ss.top()-i;
                ss.pop();
            }
             ss.push(i);
        }
         while(!ss.empty()){
                rarr[ss.top()]=ss.top()+1;
                ss.pop();
            }
     unsigned long long int t=0;
        for(int i=0;i<n;++i){
            t=(t%mod)+((unsigned long long int)((unsigned long long int)(larr[i]%mod)*(rarr[i]%mod))%mod*arr[i])%mod;
            }
        cout<<n;
        return t%mod;
    }
};