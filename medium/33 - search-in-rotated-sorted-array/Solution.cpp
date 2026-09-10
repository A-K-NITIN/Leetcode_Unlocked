class Solution {
public:
    int search(vector<int>& nums, int t) {
        bool sec1=(t>=nums[0]);
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int mid= s + (e-s)/2;
            if(nums[mid]==t) return mid;
            else if(nums[mid]<t)
            {
                if(sec1)
                {
                    if(nums[mid]<nums[0]) e=mid-1;
                    else s=mid+1;
                }
                else s=mid+1;
                
            } 
            else
            {
                if(sec1) e=mid-1;
                else{
                    if(nums[mid]<nums[0]) e=mid-1;
                    else s=mid+1;
                } 
            }
        }

        return -1;
    }
};