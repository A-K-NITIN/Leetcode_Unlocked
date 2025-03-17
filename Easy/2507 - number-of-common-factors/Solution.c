int commonFactors(int a, int b) {
    unsigned short int n=(a>b)?a:b,x=0,i=1;
    for(;i<=n;i++){
        if(a%i==0&&b%i==0)
          x++;
    }
    return x;
}