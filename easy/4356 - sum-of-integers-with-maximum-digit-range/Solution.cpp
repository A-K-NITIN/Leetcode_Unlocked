class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        unsigned long long int sum=0;
        int maxs=-1;
        for(auto x:nums){
            int tem=x;
            int min,max;
            min=max=x%10;
            while(x!=0){
                if(max<x%10)
                    max=x%10;
                if(min>x%10)
                    min=x%10;
                x/=10;
            }
            
            if(maxs<max-min){
                sum=tem;
                maxs=max-min;
            }
            else if(maxs==max-min)
                sum+=tem;
                
        }
        return sum;
    }
};