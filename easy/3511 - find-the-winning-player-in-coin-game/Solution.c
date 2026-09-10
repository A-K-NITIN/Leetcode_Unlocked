char* winningPlayer(int x, int y) {
    unsigned short int n=0;
    while(x>=1&&y>=4){
        n++;
        x--;
        y-=4;
    }
    return (n%2)?"Alice":"Bob";
}