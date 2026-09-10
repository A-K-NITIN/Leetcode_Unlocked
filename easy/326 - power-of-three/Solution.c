bool isPowerOfThree(int n) {
    if(n==0)
     return 0;
    while(n!=0){
        if(n%3!=0&&n!=1)
          return 0;
        n/=3;
    }
    return 1;
}