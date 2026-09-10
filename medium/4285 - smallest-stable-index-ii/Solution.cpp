class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> maxy(n),miny(n);
        int ans=-1;
        //maxy stores the laregest element btw (0,i) at i
        for(int i=0;i<n;i++){
            if(nums[i]>ans)
                ans=nums[i];
             maxy[i]=ans;
        }
        //miny stores the smallest element btw (i,n-1) at i
        for(int i=n-1;i>=0;i--){
            if(nums[i]<ans)
                ans=nums[i];
             miny[i]=ans;
        }
        ans=-1;
        for(int i=n-1;i>=0;i--){
            if(maxy[i]-miny[i]<=k)
                ans=i;
        }
        return ans;
    }
    
};