class NumArray {
public:
    vector<int> prx;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(auto i:nums){
            sum+=i;
            prx.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return prx[right]-((left==0)?0:prx[left-1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */