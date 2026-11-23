// Pushed: 2026-11-23 12:41:23 UTC
// Difficulty: Medium
// Runtime: 18 ms
// Memory: 226.6 MB

class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& t) {
        int c=0,i=0,n=nums.size(),tem=n-1;
        while(i<n&&nums[i]==t[i])++i;
        if(i<n){
        sort(nums.begin()+i,nums.end(),greater<>());
        tem=i;
         while(i<n&&nums[i]==t[i])++i;
        }
        if(i==n){
            ++c;
            i=tem;
            --tem;
            while(tem>=0&&nums[tem]==nums[i]){
                ++c;
                --tem;
            }
            while(tem>=0&&nums[tem]>nums[i]&&nums[tem]>=nums[tem+1]){
                ++c;
                --tem;
            }
        }
        return c;
    }
};