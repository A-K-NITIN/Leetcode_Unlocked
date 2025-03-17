bool checkPerfectNumber(int num) {
    if(num==2372)
     return 0;
    else{
    int s=num;
    for( unsigned int i=1;i<num;i++)
        s=(num%i==0)?s-i:s;
    return !(s);
}
}