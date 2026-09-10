class Solution {
public:
    int nearestDrone(vector<vector<int>>& d, vector<int>& t) {
        int idx=-1,min=INT_MAX,n=d.size();

        for(int i=0;i<n;++i){
            if((abs(d[i][0]-t[0])+abs(d[i][1]-t[1])<=d[i][2])&&(abs(d[i][0]-t[0])+abs(d[i][1]-t[1])<min)){
                min=abs(d[i][0]-t[0])+abs(d[i][1]-t[1]);
                idx=i;
            }
        }
        return idx;
    }
};