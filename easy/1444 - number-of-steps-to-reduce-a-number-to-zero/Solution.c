int numberOfSteps(int num) {
    int n=0;
    while(num!=0)
    {
        n++;
        num=(num%2==0)?num/2:num-1;
    }
    return n;
}