class Solution {
public:
    
    string convertToTitle(int num) {
        stack<int> n;
        while(num!=0){
            n.push(num%26);
            if(num==26)
                break;
            num/=26;
        }
        string ans="";
        while(!n.empty()){
            ans+=(char)64+((n.top()!=0)?n.top():26);
            n.pop();
        }

      return ans;  
    }
};