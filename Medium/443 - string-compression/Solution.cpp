class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,k=0;
        while(i<chars.size()){
            chars[k]=chars[i];
            if(i+1==chars.size()||chars[i]!=chars[i+1]){
                i++;
                k++;
                continue;
            }
           
            int j=i+1;
            if(j>=chars.size())
                break;
             
            while(j+1<chars.size()&&chars[j]==chars[j+1])j++;
            int d=j-i+1,dd=0;
            while(d!=0){
                j++;
                chars.insert(chars.begin()+k+1,'0'+(d%10));
                cout<<j<<" "<<((j<chars.size())?chars[j]:' ')<<k<<endl;
                d/=10;
                dd++;
            }
            i=j+1;
            k+=dd+1;
            
                
           
        }
        return (k)?k:k;
    }
};