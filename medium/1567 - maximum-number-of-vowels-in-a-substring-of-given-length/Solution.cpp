class Solution {
public:
    int maxVowels(string s, int k) {
        int max=0;
        int i=0;
        for(int j=0;j<k;j++){
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                    max++;
            }
        i++;
        int sum=max;
        while((i+k-1)<s.size()){
            if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u')
                    sum--;
            if(s[i+k-1]=='a'||s[i+k-1]=='e'||s[i+k-1]=='i'||s[i+k-1]=='o'||s[i+k-1]=='u')
                    sum++;
            
            max=(max<sum)?sum:max;
            i++;
        }
        return max;
    }
};