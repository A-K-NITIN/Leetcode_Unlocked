class Solution {
public:
     double mid(vector<int>& nums1, vector<int>& nums2,int& n,int& m){
        int s=-1,e=n,p=(n+m+1)/2;
        bool f=false;
        if((n+m)%2==0)
            f=true;
        while(s<=e){
            int mid1=s+(e-s)/2;
            int mid2=(p-(mid1+1))-1;
            int x=((mid1<0)?INT_MIN:nums1[mid1]);
            int y=((mid2<0)?INT_MIN:nums2[mid2]);
            int b=((mid2<m-1)?nums2[mid2+1]:INT_MAX);
            int a=((mid1<n-1)?nums1[mid1+1]:INT_MAX);
            if(x<=b&&a>=y){
                if(f)
                return  ((double) (max(x,y) + min(b,a) ) /2.0);
                return  max(x,y);
            }
            else if(x>b)
                e=mid1-1;
            else
                s=mid1+1;

        }
        if(f)
            return (double)nums2[m/2]+nums2[(m-1)/2]/2.0;
        return nums2[m/2];
     }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        if(n<=m)
        return mid(nums1,nums2,n,m);
        return mid(nums2,nums1,m,n);
    }
};