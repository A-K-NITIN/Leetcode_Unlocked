class Solution {
public:
     int gcd(int a,int b) {
         if(b==0)
             return a;
        return gcd(b,a%b);
     }  
    long long gcdSum(vector<int>& nums) {
        int max=nums[0];
        long long int ans=0;
        for(int i=1;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
                continue;
            }
            nums[i]=gcd(max,nums[i]);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()/2;i++){
            ans+=gcd(nums[nums.size()-i-1],nums[i]);
        }
        return ans;
    }
};