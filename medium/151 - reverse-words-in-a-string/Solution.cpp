class Solution {
public:
    string reverseWords(string s) {
     vector<string>arr;
     int i=s.size()-1;
        while(i>=0){
            while(i>=0&&s[i]==' ')i--;
            int j=i;
            while(j>0&&s[j-1]!=' ')j--;
            if(i<0)
                    break;
            arr.push_back(s.substr(j,i+1-j));
            i=j-1;
        }
        string r="";
        for(i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                r+=arr[i];
                break;
            }
            r+=arr[i]+" ";
        }
        return r;
    }
};