void reverseString(char* s, int sSize) {
    for(unsigned short int i=0;i<sSize/2;i++){
        s[i]^=s[sSize-1-i];
        s[sSize-1-i]=s[i]^s[sSize-1-i];
        s[i]^=s[sSize-1-i];
    }
}