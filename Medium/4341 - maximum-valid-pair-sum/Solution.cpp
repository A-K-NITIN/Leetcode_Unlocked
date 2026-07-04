class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        long long int max=-1;
        int maxi=0;
        int tem=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(max<nums[i]){
               max=nums[i];
                tem=maxi;
                maxi=i;
            }
        }
        max=-1;
        for(int i=0;i<n;i++){
            if(max<nums[i]+nums[maxi]&&abs(i-maxi)>=k)
               max=nums[i]+nums[maxi];
            if(max<nums[i]+nums[tem]&&abs(i-tem)>=k)
               max=nums[i]+nums[tem];
        }
     if(max==-1){
            for(int i=0;i<n;i++){
                for(int j=k+i;j<n;j++){
                    if(max<((long long)nums[i]+nums[j]))
                        max=((long long)nums[i]+nums[j]);
                }
            }
         }
        
        return max;
    }
};