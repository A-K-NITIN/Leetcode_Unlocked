class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
         vector<int>ans;
         int i=0;
         while(i<a.size()){
                if(a[i]>0||ans.size()==0||ans[ans.size()-1]<0){
                    ans.push_back(a[i]);
                    i++;
                }
                else{
                    if(abs(a[i])<ans[ans.size()-1])
                        i++;
                    else if(abs(a[i])==ans[ans.size()-1]){
                        ans.pop_back();
                        i++;
                    }
                    else
                        ans.pop_back();
                }

         }

         return ans;
    }
};