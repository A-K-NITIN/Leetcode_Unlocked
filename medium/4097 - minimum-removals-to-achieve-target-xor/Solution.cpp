class Solution {
public:
    void back(vector<int>& nums, int target,int c,int& min){
        
        int a=0;
        for(auto i:nums)
            a^=i;
        if(a==target){
            if(min>c||min==-1)
                min=c;
            return;
        }
        if(nums.size()==0)
            return;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            nums.erase(nums.begin()+i);
            back(nums, target,c+1,min);
            nums.insert(nums.begin()+i,x);
        }
    }
    int minRemovals(vector<int>& nums, int target) {
        int min=-1;
        back(nums, target,0,min);
        return min;
    }
};