char* largestOddNumber(char* num) {
    for(int i=strlen(num)-1;i>=0;i--){
        if(num[i]%2!=0){
          num[i+1]='\0';
          break;
        }
        if(i==0)
          num[i]='\0';  
    }
    return num;

}