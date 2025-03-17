int countDigits(int num) {
  int n=num;
  unsigned short int x=0;
  while(n!=0){
    if(num%(n%10)==0)
     x++;
    n/=10;
  }
  return x;
}