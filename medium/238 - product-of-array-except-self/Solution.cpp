class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> sufix(n),prifix(n);
        prifix[0]=nums[0];
        sufix[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++)prifix[i]=prifix[i-1]*nums[i];
        for(int i=n-2;i>=0;i--)sufix[i]=sufix[i+1]*nums[i];
        for(int i=1;i<n-1;i++)nums[i]=prifix[i-1]*sufix[i+1];
        nums[0]=sufix[1];
        nums[n-1]=prifix[n-2];
        return nums;
    }
};