class Solution {
public:
    bool isprime(int n){
        if(n%2==0&&n!=2)
            return false;
        
        if(n<2)
            return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)
                return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                while(!isprime(nums[i])){
                    ans++;
                    nums[i]++;
                }
            }
            else{
                while(isprime(nums[i])){
                    ans++;
                    nums[i]++;
                }
            }
        }
        return ans;
    }
};