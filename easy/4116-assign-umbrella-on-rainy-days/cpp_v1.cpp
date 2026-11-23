// Pushed: 2026-11-23 12:39:51 UTC
// Difficulty: Easy
// Runtime: 6 ms
// Memory: 37.8 MB

class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int ac,bc,n=rain.size();
        ac=bc=0;
        bool a,b;
      
        vector<string>ans;
        for(int i=0;i<n;++i){
            a=b=false;
            if(rain[i]==1){
                b=1;
                if(i+1<n&&rain[i+1]==1)
                    a=1;
            }
            if(a&&!b){
                ans.push_back("Alice");
                ac+=1;
            }
            else if(!a&&b){
                ans.push_back("Bob");
                bc+=1;
            }
            else if(a&&b){
                
                if(ac<=bc){
                    ans.push_back("Alice");
                    ac+=1;
                }
                else{
                    ans.push_back("Bob");
                    bc+=1;
                }
            }
            else
                ans.push_back("None");
        }
        return ans;
    }
};