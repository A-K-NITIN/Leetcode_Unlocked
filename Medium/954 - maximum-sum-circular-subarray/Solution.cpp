class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int j=-1,max=nums[0],k=0;
        int i=0;
        if(n==1)
            return max;
        while(i<2*n){
              
            if(k==0&&i<n)
                j=i;
            k+=nums[(i%n)];
            if(k>max)
                max=k;
            if(i<n&&k<0)
                k=0;
            
            ++i;
            
            if((i%n)==j){
                 k-=nums[j];
                 j++;
                 while(j<n&&nums[j]<=0){
                     k-=nums[j];
                    j++;
                 }
                 if(j>=n)
                     break;
                 if(k>max)
                    max=k;
            }
        }
        return max;
    }
};