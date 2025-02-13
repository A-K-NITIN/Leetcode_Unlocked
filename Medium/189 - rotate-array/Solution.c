void rotate(int* nums, int numsSize, int k) {
      k%=numsSize;
     int i=0,n1,n2=nums[0];
     for(int j=1;j<=numsSize;j++)
     {
      n1= nums[(i+k)%numsSize];
       nums[(i+k)%numsSize]=n2;
       n2=n1;
       i=(i+k)%numsSize;
      if(k%2!=0&&numsSize%2!=0&&i==0&&j!=1)
      {
       i=1;
       n2=nums[1];
       }
     }

}