class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int s=0,e=nums.size()-1;
        if(nums.size()==1)
            return (nums[0]>=t?0:1);
        while(s<e){
            int mid= s+(e-s)/2;
            if(nums[mid]==t)
                return mid;
            else if(nums[mid]>t)
                e=mid;
            else
                s=mid+1;
        }

        return (nums[e]>t?e:e+1);
    }
};