class Solution {
public:
    string addBinary(string a, string b) {
        list <char> s;
        int i=a.size()-1,j=b.size()-1,c=0;
        while(i!=-1&&j!=-1){
            int n=(int)a[i]+(int)b[j];
            n-=48*2;
            n+=c;
            if(n>=2){
                c=1;
                n-=2;
            }
            else
             c=0;
            n+=48;
            s.push_front((char)n);
            i--;
            j--;
        }
        while(i!=-1){
            int n=(int)a[i];
            n-=48; 
            n+=c;
            if(n>=2){
                c=1;
                n-=2;
            }
            else
             c=0;
            n+=48;
            s.push_front((char)n);
            i--;
        }
        while(j!=-1){
            int n=(int)b[j];
            n-=48;
            n+=c;
            if(n>=2){
                c=1;
                n-=2;
            }
            else
             c=0;
            n+=48;
            s.push_front((char)n);
            j--;
        }
        if(c){
            c+=48;
            s.push_front((char)c);
        }
        string str(s.begin(),s.end());
        
        return str;
    }
};