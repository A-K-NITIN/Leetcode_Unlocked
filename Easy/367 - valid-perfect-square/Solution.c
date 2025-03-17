bool isPerfectSquare(int num) {
    for(unsigned int i=0;i<=num;i++){
        if(i*i>num)
         return 0;
        if(i*i==num)
         return 1;  
    }
    return 0;
}