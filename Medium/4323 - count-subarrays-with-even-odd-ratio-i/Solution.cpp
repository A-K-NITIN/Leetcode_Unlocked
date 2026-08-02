class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int c=0;
        int e=0,o=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            e=0;
            o=0;
            for(int j=i;j<n;++j){
                if(nums[j]%2)
                    ++o;
                else
                    ++e;
                if((e*b)<=(a*o))
                    ++c;
                    
            }
        }
        return c;
    }
};