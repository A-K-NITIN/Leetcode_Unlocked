class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& n, int k) {
        int l=n.size();
        for(int i=0;i<l-1;i++){
            for(int j=i+1;j<l;j++){
                if(n[i]==n[j]&& abs(i-j)<=k)
                  return 1;
            }
        }
        return 0;
    }
};