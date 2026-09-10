int romanToInt(char* s) {
      int l=strlen(s)-1;
      unsigned int sum=0;

    while(l>=0)
    {
        if(s[l]=='I')
           sum+=1;
        else if(s[l]=='V'){
            if(l-1>=0&&s[l-1]=='I'){
                sum+=4;
                l--;
            }
            else 
               sum+=5;
        }
        else if(s[l]=='X'){
            if(l-1>=0&&s[l-1]=='I'){
                sum+=9;
                l--;
            }
            else 
               sum+=10;

        }
        else if(s[l]=='L'){
            if(l-1>=0&&s[l-1]=='X'){
                sum+=40;
                l--;
            }
            else 
               sum+=50;

        }
        else if(s[l]=='C'){
            if(l-1>=0&&s[l-1]=='X'){
                sum+=90;
                l--;
            }
            else 
               sum+=100;

        }
        else if(s[l]=='D'){
            if(l-1>=0&&s[l-1]=='C'){
                sum+=400;
                l--;
            }
            else 
               sum+=500;

        }
        else if(s[l]=='M'){
            if(l-1>=0&&s[l-1]=='C'){
                sum+=900;
                l--;
            }
            else 
               sum+=1000;

        }
        l--;
    }
    return sum;
}