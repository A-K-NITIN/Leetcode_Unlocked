int mySqrt(int x) {
   unsigned  long int i;
    for(i=0;i*i<=x;i++);
    return --i;
}