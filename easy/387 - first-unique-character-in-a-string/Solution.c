int firstUniqChar(char* s) {
    for( unsigned int i=0;s[i];i++){
        bool f=1;
        for(unsigned int j=0;s[j];j++){
            if(s[i]==s[j]&&i!=j){
                f=0;
                break;
            }
        }
         if(f)
          return i; 
    }
    return -1;
}