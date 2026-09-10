class Solution {
public:
    int numSteps(string s) {
        
        int c=0;
        while(s!="1"){
            c++;
            if(*(s.end()-1)=='0')//to check even
                s.pop_back();// to divide if even 
            else{//its odd
               int  carry=1;//to store carry
               int n =s.size()-1;
                s[n]='0';//changge the last bit for adding one
                for(int i=n-1;i>=0;i--){
                    if(s[i]=='1')
                        s[i]='0';//carry continuee
                    else{
                        s[i]='1';
                        carry=0;
                        break;
                    }
                }
                if(carry)//if the size is not suficient to carry 
                s.insert(0,1,'1');

            }
        }
        
        return c;
    }
};