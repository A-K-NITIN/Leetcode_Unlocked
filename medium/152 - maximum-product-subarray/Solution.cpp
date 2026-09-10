class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxProd=nums[0];

        int pro=1;
        for(int i=0;i<n;i++){
            pro *=nums[i];
            maxProd=max(maxProd,pro);
            if(pro==0)pro=1;
        }
        pro=1;
        for(int i=n-1;i>=0;i--)
{
    pro *=nums[i];
    maxProd=max(maxProd,pro);
    if(pro==0)pro=1;
}     
return maxProd;   
    }
};