class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> tem(n);
        tem[0]=nums[0];
        for(int i=1;i<n;i++)
            tem[i]=nums[i]-nums[i-1];
        cout<<endl;
        for(auto i:queries){
            int l=i[0],r=i[1];
            tem[l]-=1;
            if(r!=n-1)
            tem[r+1]+=1;
        }
          for(int i=1;i<n;i++)
            tem[i]+=tem[i-1];
        for(auto i:tem){
            if(i>0)
                return false;
        }
        return true;
    }
};