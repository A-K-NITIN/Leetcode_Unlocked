class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(),s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(((mid>0&&nums[mid]>nums[mid-1])||mid<=0)&&
            ((mid<n-1&&nums[mid]>nums[mid+1])||mid>=n-1))
                return mid;
            else if(mid>0&&nums[mid]>nums[mid-1])
               s=mid+1;
            else if(mid<n-1&&nums[mid]>nums[mid+1])
                e=mid-1;
            else 
                s=mid+1;
        }
        return -1;
    }
};