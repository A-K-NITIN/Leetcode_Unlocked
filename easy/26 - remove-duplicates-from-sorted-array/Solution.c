int removeDuplicates(int* nums, int numsSize) {
    //keeping a number as a sustitute as it ia static array its immposible to reduse the size 
       short int i,j,k;
    for( i=0;i<numsSize;i++){
        //only 101 is the number which is not been usen in other test case 
             if(nums[i]==101)
               break;
        for( j=i+1;j<numsSize;j++){
             while(nums[i]==nums[j]){ //to find duplicates
                if(nums[j]==101)//to not to move the sustitute number at the last
                   break;
                for(k=j;k<numsSize-1;k++)
                    nums[k]=nums[k+1]; //move one element left at a itration
                nums[numsSize-1]=101;
//mark the last number as substitute number so to escape infinte loop and know where to stop  
            }
            
        }
    }
    return i;
}