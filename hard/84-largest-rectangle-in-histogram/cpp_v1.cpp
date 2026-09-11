// Pushed: 2026-09-11 07:28:06 UTC
// Difficulty: Hard
// Runtime: 31 ms
// Memory: 89.4 MB

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        stack<int>ss;
        vector<int> lh(n,1),rh(n,1);
        for(int i=0;i<n;++i){
            while(!ss.empty()&&h[i]<h[ss.top()]){
                lh[ss.top()]=i-ss.top();
                ss.pop();
            }
            ss.push(i);
        }
        while(!ss.empty()){
            lh[ss.top()]=n-ss.top();
            ss.pop();
        }
        for(int i=n-1;i>=0;--i){
            while(!ss.empty()&&h[i]<h[ss.top()]){
                rh[ss.top()]=ss.top()-i;
                ss.pop();
            }
            ss.push(i);
        }
        while(!ss.empty()){
            rh[ss.top()]=ss.top()+1;
            ss.pop();
        }
        int max=-1;
        for(int i=0;i<n;++i){
            if((lh[i]+rh[i]-1)*h[i]>max)
                max=(lh[i]+rh[i]-1)*h[i];
        }
        return max;
    }
};