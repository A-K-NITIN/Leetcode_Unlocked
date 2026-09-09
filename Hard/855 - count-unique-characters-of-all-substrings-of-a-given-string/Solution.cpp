class Solution {
public:
    int uniqueLetterString(string s) {
        unordered_map<char,vector<int>>mp;
        int n=s.size(),x;
        for(int i=0;i<n;++i){
            //to find wheare the next repeating element presant 
            mp[s[i]].push_back(i);
        }
// sum of to unique substring is equal to sum of each contributin made by the char and ther total sum

// all posible substring including the char is cross prodect between the logest string with the char ending and logst sith starting of the same char 
// eg in asdfg for contribution of d is :asd*dfg which will give all posible substring then 3*3==9

        int ans=0,l,r;
        for(auto [c,arr] :mp){
            x=arr.size();
            for(int i=0;i<x;++i){
                if(i==0)
                    l=arr[i]+1;
                else
                    l=arr[i]-arr[i-1];
                if(i==x-1)
                    r=n-arr[i];
                else
                    r=arr[i+1]-arr[i];
                ans+=(l*r);
            }
        }
        return ans;
    }
};