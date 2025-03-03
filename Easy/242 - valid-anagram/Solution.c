bool isAnagram(char* s, char* t) {
     short int arr[26];
    unsigned short int i;
    if(strlen(s)!=strlen(t))
     return 0;
    for( i=0;s[i];i++){
        arr[s[i]-'a']+=1;
        arr[t[i]-'a']-=1;
    }
   for(i=0;i<26;i++){
    if(arr[i]!=0)
      return 0;
   }
   return 1;
}