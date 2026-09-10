bool isPowerOfFour(int n) {
    if(n==0)
     return 0;
    while(n!=0){
        if(n%4!=0&&n!=1)
          return 0;
        n/=4;
    }
    return 1;
}