class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long int sum=0,grp=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            sum=(long long)sum+nums[i];
            if(i==(n-1)/2)
                grp=sum;
        }
        int i=0,j=(n-1)/2;
        int c=0;
        while(i<n){
            if(grp>(sum-grp))
                ++c;
            ++i;
            j=(j+1)%n;
            grp=grp-nums[i-1]+nums[j];
            
        }
        return c;
    }
};