// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    if(isBadVersion(n)==1&&isBadVersion(n-1)==0)
      return n;
    while(n!=0){
    if(isBadVersion(n)==0)
     return n+1;
    n--;
   } 
   return 1;
}