class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<char> c;
        for(auto i:words){
            int sum=0;
             for(auto j:i){
                 j-='a';
                  sum+=weights[j];
             }
            sum%=26;
            c.push_back('z'-sum);
            
        }
        string ss(c.begin(),c.end());
        return ss;
    }
};