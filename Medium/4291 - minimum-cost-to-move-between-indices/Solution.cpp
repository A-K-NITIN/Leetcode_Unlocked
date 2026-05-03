class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> clos(n);
        clos[0]=1;
        clos[n-1]=n-2;
        for(int i=1;i<n-1;i++){
            if(abs(nums[i]-nums[i+1])<abs(nums[i]-nums[i-1]))
                clos[i]=i+1;
            else
                clos[i]=i-1;
        }
        vector<int> ans;
        for( auto i : queries){
            int start =i[0],end=i[1];
            int sum=0;
            if(start<end){
                for(;start<end;start++){
                    if(clos[start]==start+1)
                        sum++;
                    else 
                        sum+=abs(nums[start]-nums[start+1]);
                }
            }
            else{
                for(;start>end;start--){
                    if(clos[start]==start-1){
                         sum++;
                        cout<<sum<<"  "<<start<<"  "<<clos[start]<<endl;
                    }
                       
                    else 
                        sum+=abs(nums[start]-nums[start-1]);
                }
            }
            ans.push_back(sum);
                
        }
        return ans;
    }
};