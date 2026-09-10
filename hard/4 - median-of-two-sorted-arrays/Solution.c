double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
   int n=nums1Size+nums2Size,q=0,w=0;
   double m=0;
   if(n%2)
   {
    for(int i=0;i<=n/2;i++)
    {
        if(q<nums1Size&&w<nums2Size&&nums1[q]<=nums2[w])
            m=nums1[q++];
        else if(q<nums1Size&&w<nums2Size&&nums1[q]>nums2[w])
            m=nums2[w++];
        else
        {
            if(q<nums1Size)
                m=nums1[q++];
            else if(w<nums2Size)
                m=nums2[w++];
        }
    }
   }
   else
   {
    double t;
    for(int i=0;i<=n/2;i++)
    {
        t=m;
        if(q<nums1Size&&w<nums2Size&&nums1[q]<=nums2[w])
            m=nums1[q++];
        else if(q<nums1Size&&w<nums2Size&&nums1[q]>nums2[w])
            m=nums2[w++];
        else
        {
            if(q<nums1Size)
             m=nums1[q++];
            else if(w<nums2Size)
            m=nums2[w++];
        }
    }
    m=(t+m)/2;
   }
  return m;
}