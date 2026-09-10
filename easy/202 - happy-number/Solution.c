bool isHappy(int n) {
        while(n>9||n==1||n==7){
            if(n==1)
            return true;
            int tem=n;
            n=0;
            while(tem!=0){
                n+=(tem%10)*(tem%10);
                tem/=10;
            }
            
        }
        return false;   
}