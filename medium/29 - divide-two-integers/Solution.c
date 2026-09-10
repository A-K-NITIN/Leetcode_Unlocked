int divide(int dividend, int divisor) {
    return (INT_MIN==dividend&&divisor==-1)?INT_MAX:(dividend/divisor);
}