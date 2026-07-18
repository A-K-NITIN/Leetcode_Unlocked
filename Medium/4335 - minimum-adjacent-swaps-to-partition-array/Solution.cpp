class Solution {
public:
    //int mod=1000000007;
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        int l,bt,e,n=nums.size();
        l=bt=e=0;
        for(int i=0;i<n;++i){
            if(nums[i]<a)
                ++l;
            else if(nums[i]>b) 
                ++e;
            else
                ++bt;
        }
        cout<<l<<"  "<<bt<<"  "<<e<<"\n";
        int ans=0;
        vector<int> li,ei;
        for(int i=0;i<n;++i){
            if(i<l&&nums[i]>=a)
               li.push_back(i); 
            if(i>(l+bt-1)&&nums[i]<=b)
                ei.push_back(i);
        }
        int lip=0,eip=0;
        cout<<li.size()<<"  "<<ei.size()<<"\n";
        for(int i=0;i<n;++i){
            cout<<i<<"   "<<lip<<"  "<<eip<<"  "<<ans<<"\n";
            if(lip<li.size()&&i>l-1&&nums[i]<a){
                ans+=(i-li[lip]);
                ++lip;
            }
            else if(bt!=0&&eip<ei.size()&&i<l+bt&&nums[i]>b){
                ans+=(ei[eip]-(i+li.size()));
                ++eip;
            }
        }
        return ans;
    }
};