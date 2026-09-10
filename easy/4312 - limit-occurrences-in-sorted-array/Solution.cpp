class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int i=0,a=0 ,n=nums.size();
        while(i<n){
            int j=i+1;
            while(j<n&&nums[i]==nums[j])j++;
            int c=(j-i>=k)?k:j-i;
            if(a==0)
                a+=c;
            else{
                for(int s=0;s<c;s++)nums[a+s]=nums[i];
                a+=c;
            }
             cout<<i<< "  "<<j<<"  "<<c<<" "<<a<<endl;
            i=j;
        }
        nums.erase(nums.begin() + a,nums.end());
        return nums;
    }
};