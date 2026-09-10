class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
       int odd=0,even=0 ;
        for(auto i : nums){
            if(i%2)
                odd++;
            else
                even++;
        }
            vector<int> ans;
        for(auto i : nums){
            if(i%2){
                odd--;
                ans.push_back(even);
            }
            else{
                even--;
                ans.push_back(odd);
            }
                
        }
        return ans;
    }
};