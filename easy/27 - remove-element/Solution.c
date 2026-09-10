int removeElement(int* nums, int n, int val) {
    int d=0;
    for(int i=0;i<n;i++){
        if(nums[i]==val){
            d++;
            for(int j=i;j<n-1;j++){
                nums[j]=nums[j+1];
            }
            continue;
        }
    }
    return n-d+1;
}