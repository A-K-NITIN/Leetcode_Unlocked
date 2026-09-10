class Solution {
public:
    bool detectCapitalUse(string w) {
        if(w[0]==toupper(w[0])){
            if(w[1]==tolower(w[1])){
                 for(int i=1;w[i];i++)
                    if(w[i]==toupper(w[i]))
                        return 0;
            }
            else{
                for(int i=1;w[i];i++)
                    if(w[i]==tolower(w[i]))
                         return 0;
            }
        }
        else{
            for(int i=1;w[i];i++)
                if(w[i]==toupper(w[i]))
                 return 0;
        }
        return 1;
    }
};