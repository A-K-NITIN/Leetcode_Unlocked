int differenceOfSums(int n, int m) {
     int a=0;
    for(;n>=0;n--)
        a=(n%m==0)?a-n:a+n;
    return a;
}