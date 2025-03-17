int arrangeCoins(int n) {
    unsigned long int i=0;
    while((i*(i+1))/2<=n){
        i++;
    }
    return i-1;
}