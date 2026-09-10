/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int n=0;
    *returnSize=2;
    int *s=malloc(2*sizeof(int));
   for(int i=0;i<numsSize;i++){
    if(n==2)
        break;
    for(int j=i+1;j<numsSize;j++){
        if(n==2)
        break;
       if(nums[i]==nums[j]){
            s[n]=nums[i];   
          n++;
       }  
    }
   }
   return s;
}