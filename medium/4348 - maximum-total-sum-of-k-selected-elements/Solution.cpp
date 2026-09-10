class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<>());
         unsigned long long int sum=0;
        for(int i=0;i<k;i++){
            if(mul>0){
                sum+=((unsigned long long int)mul*(unsigned long long int)nums[i]);
                mul--;
            }
            else
                sum+=nums[i];
        }
        return sum;
    }
};