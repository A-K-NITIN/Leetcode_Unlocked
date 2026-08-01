class Solution {
public:
    void back(int i,int j,int a,int b,bool& f,vector<int>& nums){
        if(i>j){
            if(a>=b)
                f=1;
            return;
        }
        if(f)
            return;
        a+=nums[i];
        ++i;
        if(i<=j&&nums[i]<=nums[j])
        back(i,j-1,a,b+nums[j],f,nums);
        else if(i<=j&&nums[i]>nums[j])
        back(i+1,j,a,b+nums[i],f,nums);
        else
        back(i,j,a,b,f,nums); 
        --i; 
        a-=nums[i];
        
        a+=nums[j];
        --j;
        if(i<=j&&nums[i]<=nums[j])
        back(i,j-1,a,b+nums[j],f,nums);
        else if(i<=j&&nums[i]>nums[j])
        back(i+1,j,a,b+nums[i],f,nums);
        else
        back(i,j,a,b,f,nums);
    }
    bool predictTheWinner(vector<int>& nums) {
        bool f=0;
        back(0,nums.size()-1,0,0,f,nums);
        return f;
    }
};