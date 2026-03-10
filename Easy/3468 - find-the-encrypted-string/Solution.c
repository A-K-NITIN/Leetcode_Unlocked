char* getEncryptedString(char* s, int k) {
    int l=strlen(s);
    k%=l;
    k=l-k;
    for(int i=0;i<k;i++){
        char tem =s[l-1];
        for(int j=l-1;j>0;j--)
            s[j]=s[j-1];
        s[0]=tem;
    }
    return s;
}