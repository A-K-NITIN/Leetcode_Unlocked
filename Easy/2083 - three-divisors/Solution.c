bool isThree(int n) {
    unsigned short int  x=0;
   for(unsigned short int i=2;i<n;i++){
    if(n%i==0){
        x++;
    }
    if(x==2)
     return 0;
   }
   return (x==1)?1:0;
}