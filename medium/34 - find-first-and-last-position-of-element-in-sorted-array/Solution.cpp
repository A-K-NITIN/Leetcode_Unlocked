class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int s=0,e=nums.size()-1;
        vector<int> ans ={-1,-1};
        if(e==-1)
            return ans;
            //lower bound
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=t)
                e=mid;
            else
                s=mid+1;
        }
        if(e<nums.size()&&e>=0&&nums[e]==t)
        ans[0]=e;
        s=0,e=nums.size()-1;
        //upper bound
        while(s<e){
            int mid=s+(e-s+1)/2;//round of to esccape infinite loop
            if(nums[mid]<=t)
                s=mid;
            else
                e=mid-1;
        }
        if(s<nums.size()&&s>=0&&nums[s]==t)
        ans[1]=s;
        return ans;
    }
};