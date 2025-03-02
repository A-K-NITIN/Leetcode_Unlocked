class Solution {
public:
    bool isValid(string s) {
       stack<char> d;
       for(char i:s){
         if(i=='('||i=='['||i=='{')
          d.push(i);
         else{
            if(d.empty())
              return 0;
            else if(d.top()=='{'&&i=='}')
               d.pop();
            else if(d.top()=='['&&i==']')
               d.pop();
            else if(d.top()=='('&&i==')')
               d.pop();
            else
               return 0;
         }
       }
       return (d.empty())?1:0;
    }
};