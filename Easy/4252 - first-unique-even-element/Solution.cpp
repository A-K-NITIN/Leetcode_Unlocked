class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                bool f=true;
                for(int j=0;j<n;j++){
                    
                    if(nums[i]==nums[j]&&i!=j){
                        f=false;
                        break;
                       }
                }
                if(f)
                    return nums[i];
            }
        }
        return -1;
    }
};