bool isPalindrome(char* s) {
    int j=strlen(s)-1,i=0;
     while (i!=j&&j>=0&&i<strlen(s)){
       if(!isalnum(s[i]))
          i++;
      else if(!isalnum(s[j]))
          --j;
      else if(tolower(s[i])!=tolower(s[j])){
            return 0;
        }
     else if(tolower(s[i])==tolower(s[j])){
        i++;
        j-=1;
      }
   
     }
    return 1;
}