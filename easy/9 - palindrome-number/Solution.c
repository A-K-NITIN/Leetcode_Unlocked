bool isPalindrome(int x) {
  signed long long int tem=x,rev=0;
    if (x<0)
      return 0;
    while(tem!=0){
        rev=rev*10+(tem%10);
        tem/=10;
    }
    return (x==rev)?1:0;
}