class Solution {
public:
    string bin( int n){
       string s;
       int i=0;
       while(n!=0){
            if(n&(1<<i)){
                s.insert(0,"1");
                n^=(1<<i);
            }
            else
                s.insert(0,"0"); 
            i++;
       } 
       return s;
    }
    string convertDateToBinary(string d) {
        return bin((d[0]-48)*1000+(d[1]-48)*100+(d[2]-48)*10+(d[3]-48))+"-"+bin((d[5]-48)*10+(d[6]-48))+"-"+bin((d[8]-48)*10+(d[9]-48));
    }
};