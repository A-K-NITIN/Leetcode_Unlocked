class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)
            return n;
        int i=(log(n)/log(2));
        return 1<<i+1;
    }
};