int maxContainers(int n, int w, int maxWeight) {
    n*=n;
    while(n*w>maxWeight)
        n--;
    return n;
}