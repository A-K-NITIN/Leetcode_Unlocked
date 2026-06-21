class Solution {
public:
    bool valid(unsigned long long int n,int x){
        int u=n%10;
        while(n/10!=0)n/=10;
        return (x==u&&n==x);
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            unsigned long long int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(valid(sum,x))
                     c++;
            }
        }
        return c;
    }
};