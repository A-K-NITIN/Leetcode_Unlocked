// Pushed: 2026-09-24 04:18:23 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 31 MB

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;++i){
            sum=0;
            while(nums[i]!=0){
                sum+=nums[i]%10;
                nums[i]/=10;
                if(sum>i)
                break;
            }
            if(sum==i)
                return i;
        }
        return -1;
    }
};