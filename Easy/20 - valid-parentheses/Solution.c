bool isValid(char* s) {
     int l=strlen(s),n=0;
    for(int i=0;i<l;i++){  
        if(s[i]=='a')
           continue;
        for( int j=l-1;j>i;j--){
            int a=0;
            if(s[j]=='a')
              continue;
            for(int k=i;k<j;k++){
                if(s[k]=='a')
                a++;
            }
            if(s[i]=='('&&s[j]==')'&& a%2==0&&(j-i)%2!=0)
            {
              s[j]='a';
              s[i]='a';
              n++;
              break;
              }
            else if(s[i]=='['&&s[j]==']'&& a%2==0&&(j-i)%2!=0)
            {
              s[j]='a';
              s[i]='a';
              n++;
              break;
              }
            else if((s[i]=='{'&&s[j]=='}')||(s[i]=='}'&&s[j]=='{')&& a%2==0&&(j-i)%2!=0)
            {
                 printf("}");
              s[j]='a';
              s[i]='a';
              n++;
              break;
            }
        }
    }
    return (n==l/2&&l%2==0)?1:0;
}