class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=-1;
        for(auto i:candies){
            if(max<i)
                max=i;
        }
        vector<bool> ans;
        for(auto i:candies){
            if(max<=i+extraCandies)
                ans.push_back(true);
            else
                ans.push_back(false);      
        }
        return ans;
    }
};