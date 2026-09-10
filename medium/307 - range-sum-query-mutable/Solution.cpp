class NumArray {
public:
    vector<int> suq;
    int n;
    void build(vector<int> &nums,int i,int start,int end){
        if(start==end){
            suq[i]=nums[start];
            return;
        }
        int mid = start +(end-start)/2;
        build(nums,2*i,start,mid);
        build(nums,2*i+1,mid+1,end);
        suq[i]= suq[2*i]+suq[2*i+1];

    }
    NumArray(vector<int>& nums) {
        n=nums.size();
        suq=vector<int>(4*n+1);
        build(nums,1,0,n-1);
    }
    void chang(int index,int val,int i,int start,int end){
        if(index<start||index>end) return ;
        if(start==end){
            suq[i]=val;
            return;
        }
        int mid = start +(end-start)/2;
        chang(index,val,2*i,start,mid);
        chang(index,val,2*i+1,mid+1,end);
        suq[i]= suq[2*i]+suq[2*i+1];

    }
    void update(int index, int val) {
        chang(index,val,1,0,n-1);
    }
    int rsq(int left,int right,int i,int start ,int end){
        if(right<start||left>end) return 0;
        //if(start==end) return suq[i];
        if(left<=start and right>=end) return suq[i];
         
        int mid = start +(end-start)/2;
        return (rsq(left,right,2*i,start,mid)+
        rsq(left,right,2*i+1,mid+1,end));

    }
    int sumRange(int left, int right) {
        return rsq(left,right,1,0,n-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */