class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int c=0,n=nums.size(),i=0;
        bool f=false;
        while(i<n){
            if(nums[i]==-1){
                ++i;
                continue;
            }
            while(i+1<n&&nums[i]==nums[i+1])++i;
            int j=i+1;
            f=true;
            for(;j<n;++j){
                if(nums[j]==nums[i]){
                    nums[j]=-1;
                    f=false;
                }
            }
            if(f)
                ++c;
            ++i;
        }
        return c;
    }
};