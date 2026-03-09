char* largestEven(char* s) {
    int n=strlen(s)-1;
        while(n>=0&&s[n]=='1'){
            s[n]='\0';
            n--;
        }
        return s;
}