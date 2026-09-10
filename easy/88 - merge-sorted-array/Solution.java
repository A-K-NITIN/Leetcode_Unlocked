class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        for(int i=n+m-1;i>=0;i--){
            int t=i;
            for(int j=0;j<i;j++){
                if(nums1[j]>nums1[t])
                t=j;
            }
            if(i!=t){
            nums1[i]^=nums1[t];
              nums1[t]=nums1[i]^ nums1[t];
                nums1[i]^=nums1[t];}
        }
    }
}