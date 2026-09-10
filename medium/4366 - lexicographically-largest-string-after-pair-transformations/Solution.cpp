class Solution {
public:
    string biit(int n){
        string s="";
        for(int i=31;i>=0;--i){
            if(n&(1<<i)){
                if(i>25){
                    string t="z";
                    for(int j=1;j<=i-25;++j){
                        t+=t;
                    }
                    s+=t;
                }
                else   
                    s+=('a'+i);
            }
        }
        return s;
    }
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();
        for(int i=0;i<n;++i){
            ans.push_back(biit(nums[i]));
        }
        return ans;
    }
};