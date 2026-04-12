class Solution {
public:
    vector<double> internalAngles(vector<int>& s) {
        // cos a = b^2+c^2-a^2/2bc 
         vector<double> ans;
        if(s[0]+s[1]<=s[2]||s[0]+s[2]<=s[1]||s[1]+s[2]<=s[0])
            return ans;
        int pov=0,mul=1;
            for(auto i:s){
                pov+=(i*i);
                mul*=i;
            }
        mul*=2;
        for(auto i:s){
              ans.push_back(acos((double)(pov-(2*i*i))/(mul/i))*(180.0/M_PI));
            }
        sort(ans.begin(),ans.end());
        return ans;
    }
};